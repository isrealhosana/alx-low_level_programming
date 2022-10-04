#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string
 * @s2: string
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *copy;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	copy = malloc(sizeof(char) * (i + j + 1));

	if (copy == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		copy[i] = s2[j];
		i++, j++;
	}

	copy[i] = '\0';
	return (copy);
}
