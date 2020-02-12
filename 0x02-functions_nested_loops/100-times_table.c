#include <stdio.h>
/**
 * print_times_table - print n times table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if ( n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ( j != n)
				{
					printf("%i,  ", i*j);
				}
				else
				{
					printf("%i", i*j);
				}
			}
			printf("\n");
		}
	}
}
