#include "holberton.h"
/**
 * print_num - print any number recursivly
 * @n: int
 * Return: void
 */
void print_num(int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	if (n / 10 > 0)
	{
		print_num(n / 10);
	}
	putchar((n % 10) + '0');
}
