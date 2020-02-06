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
	printf("The last digit of %i is %i", n, n % 10);
	if (n % 10 > 5)
	{
		printf(" and is greater than 5");
	}
	else if (n % 10 == 0)
	{
		printf(" and is 0");
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf(" and is less than 6 and not 0");
	}
	return (0);
}
