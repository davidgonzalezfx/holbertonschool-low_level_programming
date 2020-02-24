#include "holberton.h"

/**
 * _strpbrk -
 *
 * Return: 
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, limit;

	limit = 1;
	for (i = 0; limit != 0; i++)
	{
		s++;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{	
				limit = 0;
				break;
			}
		}
	}
	return (s);
}
