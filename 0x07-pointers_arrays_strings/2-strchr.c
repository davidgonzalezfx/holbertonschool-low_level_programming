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

	for (limit = 0; *(s + limit) != '\0'; limit++)
	{
		s++;
		if (*(s + limit) == c)
			break;
	}
	return (s);
}
