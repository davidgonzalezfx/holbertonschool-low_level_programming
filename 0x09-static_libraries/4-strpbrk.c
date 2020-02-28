#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char pointer
 * @accept: char pointer
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
