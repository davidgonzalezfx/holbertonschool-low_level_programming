#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new = NULL;
	int size1, size2, i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	;
	for (size2 = 0; s2[size2] != '\0'; size2++)
	;
	new = malloc(sizeof(char) * (size1 + size2));
	for (i = 0; i < size1; i++)
		*(new + i) = s1[i];
	for (i = size1, j = 0; j < size2; i++, j++)
		*(new + i) = s2[j];
	*(new + i) = '\0';
	return (new);
}
