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
	for (half = (size - 1) / 2; half != size; half++)
	{
		_putchar(*(str + half));
	}
}
