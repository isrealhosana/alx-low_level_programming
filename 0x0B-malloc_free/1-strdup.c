#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 *  space in memory, which contains a copy of the string given as
 *  a parameter.
 *
 *  @str: string
 *
 *  Return: char
 */

char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;

	copy = malloc(sizeof(*str) * i);
	if (copy == NULL)
		return (NULL);

	j = 0;

	while (str[j] != '\0')
	{
		copy[j] = str[j];
		j++;
	}
	return (copy);
}
