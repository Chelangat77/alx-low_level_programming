#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: pointer to file
 * @text_content: string to append
 * Return: -1 if function fails, file doesnt exist or user lacks permission
 * otherwise return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int r, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	r = open(filename, O_WRONLY | O_APPEND);
	w = write(r, text_content, length);

	if (r == -1 || w == -1)
		return (-1);

	close(r);

	return (1);
}
