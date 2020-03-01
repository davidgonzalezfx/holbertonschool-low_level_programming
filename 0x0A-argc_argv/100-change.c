#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	for (; money > 0;)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		change++;
	}
	printf("%d\n", change);
	return (0);
}
