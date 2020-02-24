#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointer
 * @accept: char pointer
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int limit;

	for (limit = 1; s[limit - 1] != '\0'; limit++)
	{
		if (s[limit] == accept[0])
		{
			limit++;
			break;
		}
	}
	return (limit);
}
