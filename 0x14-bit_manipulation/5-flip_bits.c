#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: num1 - decimal
 * @m: num2 - decimal
 * Return: number of bits that have to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits_bin = 0;
	int bits_to_change = 0;

	num_bits_bin = n ^ m;
	for (; num_bits_bin; )
	{
		bits_to_change += num_bits_bin & 1;
		num_bits_bin >>= 1;
	}

	return (bits_to_change);
}
