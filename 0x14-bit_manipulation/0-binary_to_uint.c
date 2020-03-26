#include "holberton.h"

/**
 * _strlen - return length of string
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *(s + cnt) != '\0'; cnt++)
	{
	}
	return (cnt);
}
/**
 * binary_to_uint - converts binary to ui decimal
 * @b: string binary
 * Return: unsigned int - decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int size = 0, i = 1;

	if (!b)
		return (0);

	size = _strlen((char *)b);
	for (size--; size >= 0; size--, i *= 2)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		dec += (b[size] - 48) * i;
	}

	return (dec);
}
