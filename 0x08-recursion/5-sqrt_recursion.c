#include "holberton.h"

/**
 * init_sqrt - natural square root of a number, from 1
 * @i: int counter
 * @n: int
 * Return: sqrt(n)
 */
int init_sqrt(int i, int n)
{
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (init_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: int
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	return (init_sqrt(1, n));
}
