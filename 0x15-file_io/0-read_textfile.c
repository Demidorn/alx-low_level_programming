#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to array of chars
 * @letters: number of letters to read and print
 *
 * Return: 0 on failure otherwise actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, read_line = 0, r = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);

	if (file < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (!buffer)
		return (0);
	read_line = read(file, buffer, letters);

	if (read_line < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	r = write(STDOUT_FILENO, buffer, read_line);

	if (r <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (read_line);
}
