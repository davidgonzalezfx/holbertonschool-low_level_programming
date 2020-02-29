#include <stdio.h>
#include <stdlib.h>
/**
 * digit - check digit from char arguments
 * @s: char argument
 * Return: 1 if digit, 0 if not
 */
int digit(char *s)
{
	while (*s)
	{
		if (*s >= 48 && *s <= 57)
			s++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (digit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
