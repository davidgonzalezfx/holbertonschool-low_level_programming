#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: char pointer
 * @src: char pointer
 * @n: int limit
 * Return: dest copied from src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int limit;

	for (limit = 0; limit < n; limit++)
	{
		*(dest + limit) = *(src + limit);
	}
	return (dest);
}
