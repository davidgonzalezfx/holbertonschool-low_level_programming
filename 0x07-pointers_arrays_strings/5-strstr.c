#include "holberton.h"

/**
 * _strstr -  locates a substring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i])
			{
				haystack++;
				break;
			}
			continue;		
		}
	}
	return (haystack);
}
