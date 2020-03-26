#include "holberton.h"

/**
 * clear_bit - set index bit of n to 0
 * @n: decimal num
 * @index: index to change bit to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changed;

	if (index > 63)
		return (-1);

	changed = 1 << index;
	*n = *n & ~changed;

	return (1);
}
