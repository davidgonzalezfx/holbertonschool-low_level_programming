#include "function_pointers.h"
#include <stdio.h>

/**
 * main - main
 * @ac: argument count
 * @av: argument array
 * Return: int
 */
int main(int ac, char *av[])
{
	int *(fun)(int, char **);
	unsigned char *ptr;
	int param = 0, i = 0;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	param = atoi(av[1]);
	if (param < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	for (; i < param - 1; i++)
		printf("%02hhx ", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}
