#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to the by src
 * followed by a new line.
 * @dest: The value to evaluated
 * @src: The value to be evaluated
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}

	return (point);
}
