#include "main.h"

/**
 * _strspn - function that gets the length of a prfix substring.
 * @s: string
 * @accept: character to be checked
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i];)
			j++;

		if (s[i] == accept[j])
			len++;

		if (accept[j] == '\0')
			return (len);
	}

	return (len);
}
