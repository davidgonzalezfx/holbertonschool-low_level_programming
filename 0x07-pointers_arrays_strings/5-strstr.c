#include "holberton.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;		
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (haystack);
}
