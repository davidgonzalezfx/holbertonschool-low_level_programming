#include "holberton.h"
/**
 * _strdup - new pointer with copy of other
 * @str: char pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int size, i;
	char *newCopy = NULL;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{}
	newCopy = malloc(sizeof(char) * size + 1);
	if (newCopy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newCopy[i] = str[i];
	newCopy[i] = '\0';
	return (newCopy);
}
