#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to file
 * @letters: variable on string char for file
 * @Return: 0 if filename is NULL.
 * O/w - actual no. of bytes the funcion can read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	f = open(filename, O_RDONLY);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (f == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f);

	return (w);
}
