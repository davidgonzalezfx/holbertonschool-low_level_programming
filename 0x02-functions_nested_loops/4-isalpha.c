#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - checks alphabetic characters
 * Return: 1 if is alphabetic - 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
