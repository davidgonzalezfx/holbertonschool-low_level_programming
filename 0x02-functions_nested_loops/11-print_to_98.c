#include <stdio.h>
/**
 * print_to_98 - print number 'till 98
 * @n: int to init the output
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
		}
	}
	printf("98\n");
}
