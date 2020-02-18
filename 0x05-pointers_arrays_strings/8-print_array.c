#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of a
 * @a: int pointer
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int el;

	for (el = 0; el < n; el++)
	{
		if (el == n - 1)
		{
			printf("%d", *(a + el));
		}
		else
		{
			printf("%d, ", *(a + el));
		}
	}
	printf("\n");
}
