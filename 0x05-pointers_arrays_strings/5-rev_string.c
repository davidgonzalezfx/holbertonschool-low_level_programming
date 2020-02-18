#include "holberton.h"
/**
 * rev_string - rev a string
 * @s: char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int init, end;
	char aux;

	for (end = 0; *(s + end) != '\0'; end++)
	{}
	end--;
	for (init = 0; init < end; init++)
	{
		aux = *(s + init);
		*(s + init) = *(s + end);
		*(s + end--) = aux;
	}
}
