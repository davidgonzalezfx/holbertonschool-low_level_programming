#include "holberton.h"

/**
 * set_bit - set index bit of n to 1
 * @n: decimal num
 * @index: index to change bit to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changed;

	if (index > 63)
		return (-1);

	changed = 1 << index;
	*n = *n | changed;

	return (1);
}
