#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main function
 * Description: From random number evaluate conditions
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %i is ", n);
	if (n % 10 > 5)
	{
		printf("%i and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%i and is 0\n", n % 10);
	}
	else
	{
		printf("%i and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
