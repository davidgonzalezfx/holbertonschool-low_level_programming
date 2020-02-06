#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

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
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n == 0)
	{
		printf("%i is zero", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", 0);
	}
	return (0);
}
