#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: char
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}