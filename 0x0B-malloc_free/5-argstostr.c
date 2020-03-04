#include "holberton.h"

/**
 * argstostr - concatenate arguments
 * @ac: arguments count
 * @av: pinter of arguments vector
 * Return: new pointer of char
 */
char *argstostr(int ac, char **av)
{
	char *new = NULL;
	int size = 0, i, j, aux = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{};
		size += j + 1;
	}
	new = malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			new[aux++] = av[i][j];
		new[aux++] = '\n';
	}
	new[aux] = '\0';
	return (new);

}
