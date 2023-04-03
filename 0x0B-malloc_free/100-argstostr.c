#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program into a string
 * @ac:variable for no. of arguments passed
 * @av: array of pointers
 * Return: If ac = 0, av = NULL, or the function fails - NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			s[index++] = av[arg][byte];

		s[index++] = '\n';
	}

	s[size] = '\0';

	return (s);
}

