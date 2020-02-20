#include "holberton.h"

/**
 * rot13 - encode with rot13
 * @str: string
 * Return: string encoded
 */
char *rot13(char *str)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alp[j])
			{
				*(str + i) = rot[j];
				break;
			}
		}
	}
	return (str);
}
