#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode using rot13
 * @s: variable
 *
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alp2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == alp[j])
			{
				*(s + i) = alp2[j];
				break;
			}
		}
				i++;
	}
		return (s);
}
