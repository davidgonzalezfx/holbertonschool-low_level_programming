
#include "holberton.h"
/**
 * _strlen - return length
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * _strdup - new pointer with copy of other
 * @str: char pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *newCopy, *start;
	int size = _strlen(str);

	newCopy = malloc(sizeof(char) * size);
	start = newCopy;
	if (newCopy)
	{
		for (; *str;)
			*newCopy++ = *str++;
		newCopy = start;
		return (newCopy);
	}
	return (NULL);
}
