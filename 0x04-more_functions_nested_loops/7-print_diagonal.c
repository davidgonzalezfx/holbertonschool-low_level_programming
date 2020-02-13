#include "holberton.h"
/**
 * print_diagonal - print \ char n times
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(' ');
		}
		putchar('\\');
	}
	putchar('\n');
}
