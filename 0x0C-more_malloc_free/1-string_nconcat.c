#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string 2
 * @n: limit
 * Return: newConcat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newConcat = NULL;
	unsigned int size1 = 0, size2 = 0, index = 0, limit = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (; s1[size1]; size1++)
	{};
	for (; s2[size2]; size2++)
	{};
	if (n >= size2)
		n = size2;
	newConcat = malloc(size1 + n + 1);
	if (!newConcat)
		return (NULL);
	for (; s1[index]; index++)
		newConcat[index] = s1[index];
	for (; limit < n; index++, limit++)
		newConcat[index] = s2[limit];
	newConcat[index] = '\0';
	return (newConcat);
}
