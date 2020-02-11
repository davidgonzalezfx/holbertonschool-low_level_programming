#include <stdio.h>
#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, row, col;

	for (row = 0; row < 10; row++)
	{
        	i = row;
		for (col = 0; col < 10; col++)
		{
            		i = row*col;
			if (i > 9)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');           
			}
			else
			{
				putchar(i + '0');
			}
			if (col < 9)
			{
				putchar(',');
				putchar(' ');
			}
        	}
		putchar('\n');
	}
}
