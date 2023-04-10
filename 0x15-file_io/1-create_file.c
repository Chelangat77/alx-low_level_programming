#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to created file
 * @text_content: pointer to string in the file
 * Return: -1 if function fails otherwise return 1
 */

int create_file(const char *filename, char *text_content)
{
	int r, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(r, text_content, length);

	if (r == -1 || w == -1)
		return (-1);

	close(r);

	return (1);
}

