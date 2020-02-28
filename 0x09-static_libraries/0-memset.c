#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: char pointer
 * @b: char
 * @n: int
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int times;

	for (times = 0; times < n; times++)
	{
		*(s + times) = b;
	}
	return (s);
}
