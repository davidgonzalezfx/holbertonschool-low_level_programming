#include "holberton.h"
/**
 * _puts - print str
 * @str: char pointer
 * Return: void
 */
void _puts(char *str)
{
	int cnt;

	for (cnt = 0; *(str + cnt) != '\0'; cnt++)
	{
		_putchar(*(str + cnt));
	}
}
