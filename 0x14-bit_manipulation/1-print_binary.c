#include "holberton.h"
/**
 * dec_bin - print in binary with bitwise operator
 * @n: decimal number
 * Return: void - just prints
 */
void dec_bin(unsigned long int n)
{
	if (n == 0)
		return;

	dec_bin(n >> 1);
	n = n & 1;
	_putchar(n + 48);
}
/**
 * print_binary - print decimal in binary
 * @n: decimal number
 * Return: void - just prints
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		dec_bin(n);
}
