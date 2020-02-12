#include "holberton.h"
/**
 * print_times_table - print n times table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (x < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x % 10) + '0');
				}
				else if (x < 100 && x >= 10)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar((x / 10) % 10 + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar((x % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
