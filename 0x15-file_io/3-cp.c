#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>


#define BUFFER_SIZE 1024

/**
 * main - entry point
 * @argc: argument
 * @argv: array of argument
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int prev, curr;
	size_t read_bytes, write_bytes;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	prev = open(file_from, O_RDONLY);

	if (prev == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	curr = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (curr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", curr);
		close(prev);
		return (99);
	}

	while ((read_bytes = read(prev, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(curr, buffer, read_bytes);

		if (write_bytes == (size_t)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", curr);
			close(prev);
			return (99);
		}
	}

	if (read_bytes == (size_t)-1)
	{
		dprintf(STDERR_FILENO, "Error while reading from file %d\n", prev);
		close(prev);
		close(curr);
		return (98);
	}

	if (close(prev) == -1 || close(curr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		return (100);
	}
	return (0);
}
