#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 * Return: int: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}
