#include "main.h"

/**
 * print_binary - print an unsigned int in binary
 *
 * @n: int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, bin;

	if (n == 0)
		_putchar('0');
	for (bin = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			bin = 1;
		if (bin == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
