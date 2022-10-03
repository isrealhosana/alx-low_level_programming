#include "main.h"

/**
 * _strpbrk - function that searchers a string for any of a set of bytes.
 * @s: string
 * @accept: set of bytes
 *
 * Return: number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
