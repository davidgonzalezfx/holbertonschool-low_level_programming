#include "holberton.h"

/**
 * init_prime - check prime  from 2
 * @cnt: int
 * @n: int
 * Return: int
 */
int init_prime(int cnt, int n)
{
	if (n <= 1)
		return (0);
	if (n == cnt)
		return (1);
	if (n % cnt == 0)
		return (0);
	return (init_prime(++cnt, n));
}


/**
 * is_prime_number - 1 if prime 0 if not
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (init_prime(2, n));
}
