#include "holberton.h"

/**
 * factorial - factorial of a given number
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	if (n < 0)
		return (-1);
	return (1);
}
