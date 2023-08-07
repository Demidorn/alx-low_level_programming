#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: name of file to read
 * @letters: number of letters to print
 *
 * Return: Number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_status, result;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_status = fread(buffer, 1, letters, file);

	if (read_status == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[read_status] = '\0';

	result = fwrite(buffer, 1, read_status, stdout);
	
	if (result < read_status)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (read_status);
}
