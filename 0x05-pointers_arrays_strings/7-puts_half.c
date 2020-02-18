#include "holberton.h"
/**
 * puts_half - show second half of str
 * @str: char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int size, half;

	for (size = 0; *(str + size) != '\0'; size++)
	{}
	if (!(size % 2 == 0))
		size += 1;
	for (half = size / 2; *(str + half) != '\0'; half++)
		_putchar(*(str + half));
	_putchar('\n');
}
