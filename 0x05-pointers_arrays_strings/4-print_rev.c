#include "holberton.h"
/**
 * print_rev - print str in reverse
 * @s: char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int cnt, cnt2;

	for (cnt = 0; *(s + cnt) != '\0'; cnt++)
	{}

	for (cnt2 = cnt - 1; cnt2 >= 0; cnt2--)
	{
		_putchar(*(s + cnt2));
	}
}
