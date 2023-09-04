#include "main.h"

/**
 * create_file - creates a new file
 * @filename: pointer to array of chars
 * @text_content: chars to printed
 *
 * Return: Always 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int read_line = 0, file = 0;

	if (filename == NULL)
		return (-1);

	read_line = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (read_line < 0)
		return (-1);

	if (text_content != NULL)
	{
		file = write(read_line, text_content, strlen(text_content));

		if (file == -1)
		{
			close(read_line);
			return (-1);
		}
	}
	close(read_line);
	return (1);
}
