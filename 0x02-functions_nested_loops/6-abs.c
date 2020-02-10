#include <stdio.h>
#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
