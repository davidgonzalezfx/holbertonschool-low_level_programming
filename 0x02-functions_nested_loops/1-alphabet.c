#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - main function
 * Description: function to print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
