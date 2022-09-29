#include "main.h"

/**
 * sqrt_check - checks for the sqrt of c
 * @a: integer
 * @b: integer
 *
 * Return: sqrt of b or -1
 */


int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 *
 * Return: natural sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
