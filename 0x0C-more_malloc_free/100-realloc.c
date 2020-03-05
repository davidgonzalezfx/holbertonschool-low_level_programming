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

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
