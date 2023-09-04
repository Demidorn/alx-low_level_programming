#include "main.h"

static void write_copy(char *file, int fd, char *buf, int len);
static ssize_t read_file(char *file, char **buffer, int fd);

/**
 * main - entry point
 * @argc: argument
 * @argv: array of argument
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int file, file_1, read_len, error_mgs;
	char *buffer, *file_from, *file_to;

	buffer = NULL;
	read_len = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	file = open(file_from, O_RDONLY);
	file_1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (read_len > 0)
	{
	read_len = read_file(file_from, &buffer, file);
	if (!read_len)
		break;
	write_copy(file_to, file_1, buffer, read_len);
	}

	free(buffer);
	error_mgs = close(file);
	if (error_mgs < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	error_mgs = close(file_1);
	if (error_mgs < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	return (0);
}

/**
 * read_file - reads a file into a buffer
 * @file: file to read from
 * @buffer: pointer to a pointer of a buffer
 * @fd: file descriptors
 *
 * Return: the current size of the buffer
 */

static ssize_t read_file(char *file, char **buffer, int fd)
{
	int read_len;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (!(*buffer))
		*buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!(*buffer))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	read_len = read(fd, *buffer, BUFFER_SIZE);
	if (read_len < 0)
	{
		free(*buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (read_len);
}

/**
 * write_copy - writes the buffer to a file
 * @file: destination for contents in buffer
 * @fd: file descriptors for the @file
 * @buf: pointer to a buffer
 * @len: current size of the buffer
 */

static void write_copy(char *file, int fd, char *buf, int len)
{
	if (fd < 0 || !buf)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	if (write(fd, buf, len) < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
