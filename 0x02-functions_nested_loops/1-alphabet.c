#include "main.h"

/**
 * print_alphabet - a function that prints the aphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
