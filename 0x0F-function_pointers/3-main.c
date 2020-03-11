#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' &&
	    argv[2][0] != '-' &&
	    argv[2][0] != '*' &&
	    argv[2][0] != '/' &&
	    argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 &&
	(argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = (get_op_func(argv[2])(num1, num2));
	printf("%d\n", res);

	return (0);
}
