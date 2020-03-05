#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
