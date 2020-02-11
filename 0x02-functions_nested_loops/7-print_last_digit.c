#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - return last digit of an integer
 * @n: integer
 * Return: int number
 */
int print_last_digit(int n)
{
	if ( n < 0)
	{
		n = n * -1;
	}
	return n % 10;
}
