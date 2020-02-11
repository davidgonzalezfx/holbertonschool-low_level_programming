#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * Description - print 10 times the alphabet
 * Return - void
 */
void print_alphabet_x10(void)
{
	int i;
	char alph = 'a';

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
