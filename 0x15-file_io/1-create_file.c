#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: a string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int j, k, lens;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		lens = 0;
		while (text_content[lens])
			lens++;
	}
	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0644);

	if (j == -1)
		return (-1);

	if (text_content != NULL)
	{
		k = write(j, text_content, lens);

		if (k == -1)
		{
			close(j);
			return (-1);
		}
	}
	close(j);
	return (1);
}
