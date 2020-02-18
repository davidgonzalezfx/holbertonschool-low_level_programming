#include "holberton.h"
/**
 * puts2 - show odd positions
 * @str: char pointer
 * Return: void
 */
void puts2(char *str)
{
	int size, odd;

	for (size = 0; *(str + size) != '\0'; size++)
	{
	}
	for (odd = 0; odd < size; odd += 2)
		_putchar(*(str + odd));
	_putchar('\');
}
