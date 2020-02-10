#include <stdio.h>
#include "holberton.h"
/**
 * _islower - checks lowercase letter
 * Return: 1 if lowercase - 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
