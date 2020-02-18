#include "holberton.h"
/**
 * print_nums - print n num recursivly
 * @n: int
 * Return: void
 */
void print_nums(int n)
{
	if (n >= 10)
	{
		print_nums(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * print_array - print n elements of a
 * @a: int pointer
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int el;

	for (el = 0; el < n && *(a + el) != '\0'; el++)
	{
		print_nums(*(a + el));
		_putchar(' ');
	}
	_putchar('\n');
}
