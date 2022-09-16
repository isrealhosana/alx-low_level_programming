#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 fellowed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(1 + '0');
	_putchar('\n');
}
