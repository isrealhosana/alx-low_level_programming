#include "main.h"

/**
 * _abs - computes the absolute of a number.
 * @c: The character to be checked.
 *
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;
		return (c);
	} else
		return (c);
}
