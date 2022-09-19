#include "main.h"

/**
 * _strlen - a function that returns the length of string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = o;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
