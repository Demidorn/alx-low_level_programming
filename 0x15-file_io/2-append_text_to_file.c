#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: text to append
 * @filename: name of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0, read_line = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content || !text_content[0])
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file < 0)
		return (-1);

	while (text_content[len])
		len++;
	read_line = write(file, text_content, len);

	if (read_line < 0)
		return (-1);

	close(file);
	return (1);
}
