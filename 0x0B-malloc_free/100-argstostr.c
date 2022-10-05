#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the
 *  arguments of your program.
 *
 * @ac: integer
 * @av: char
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *copy;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	/* count the number of chars in each string */

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;

		size++;
	}

	size++;
	/* allocate memory for total number of chars and new line for each word */

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			copy[k++] = av[i][j];
		}
		copy[k++] = '\n';
	}

	copy[k] = '\0';
	return (copy);
}
