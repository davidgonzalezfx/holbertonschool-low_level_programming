#include "holberton.h"

/**
 * _pow_recursion - x raised to the power of y
 * @x: base
 * @y: power
 * Return: int x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
