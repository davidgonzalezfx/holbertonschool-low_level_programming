#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: # elements
 * @size: size of elements
 * Return: void, just allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	return (mem);
}
