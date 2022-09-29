#include "main.h"

/**
 * check_for_primality - checks for prime
 * @n: input to check
 * @i: input
 *
 * Return: prime checker
 */

int check_for_primality(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (check_for_primality(n, i - 1));
}

/**
 * is_prime_number - executes check_for_primality
 * @n: input to check
 *
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (check_for_primality(n, n / 2) > 0)
		return (1);

	return (0);
}
