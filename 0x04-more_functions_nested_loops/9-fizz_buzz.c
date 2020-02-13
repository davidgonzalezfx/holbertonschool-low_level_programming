#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{

		if (num != 1)
		{
			printf(" ");
		}
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		if (num % 5 == 0)
		{
			printf("Buzz");
		}
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			printf("%i", num);
		}
	}
	printf("\n");
	return (0);
}
