#include <stdio.h>
#include "holberton.h"
/**
 * main - main function
 * Description - Print first 50 fibo numbers
 * Return: void
 */
int main(void)
{
	int cnt, new, aux, i;

	cnt = 0;
	new = 1;
	for (i = 0; i <= 49; i++)
	{
		aux = cnt + new;
		cnt = new;
		new = aux;
		if (i != 49)
		{
			printf("%i, ", aux);
		}
		else
		{
			printf("%i\n", aux);
		}
	}

	return (0);
}
