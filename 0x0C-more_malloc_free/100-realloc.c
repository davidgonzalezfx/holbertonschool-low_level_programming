#include "holberton.h"

/**
 * _realloc - reallocates memory
 * @ptr: prev pointer
 * @old_size: prev size
 * @new_size: new size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		new = malloc(new_size);
	if (new_size > old_size)
		new = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (new);
}
