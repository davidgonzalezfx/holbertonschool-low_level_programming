#include "holberton.h"

/**
 * get_bit - return the bit of n at index
 * @n: unsigned long int - decimal num
 * @index: unsigned int - index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
