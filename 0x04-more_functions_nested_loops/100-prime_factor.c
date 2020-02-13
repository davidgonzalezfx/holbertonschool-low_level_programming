#include <stdio.h>
/**
 * isPrime - check for prime nums
 * @num: int
 * Return: int
 */
int isPrime(unsigned long num)
{
	unsigned long int i;

	for (i = 2; i != num; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	unsigned long i, n, aux;

	n = 612852475143;
	aux = n;
	for (i = 2; i < n; i++)
	{
		while (aux % i == 0)
		{
			if (isPrime(i) == 1)
			{
				aux = aux / i;
				if (aux == 1)
				{
					printf("%lu\n", i);
					return (0);
				}
			}
		}
	}


	printf("\n");
	return (0);
}
