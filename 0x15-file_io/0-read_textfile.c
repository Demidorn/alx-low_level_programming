#include "main.h"

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
	size_t read_status, result, file;

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = popen(filename, O_RDONLY);

	if (file == -1)
		return (0);

	result = read(file, buffer, letters);

	read_status = write(STDOUT_FILENO, buffer, result);
	close(file);

	return (read_status);
}
