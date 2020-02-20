#include "holberton.h"
/**
 * print_number - print any int
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
