#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: char pointer
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int limit;

	for (limit = 0; s[limit]; limit++)
	{
		if (s[limit] == c)
			return (s + limit);
	}
	if (s[limit] == c)
		return (s + limit);
	return (0);
}
