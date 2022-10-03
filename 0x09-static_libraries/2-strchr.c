#include "main.h"

/**
 * _strchr - functions that locates a character in a string.
 * @s: string
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
