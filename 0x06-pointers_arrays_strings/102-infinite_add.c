#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - ifinite sum
 * @n1: char
 * @n2: char
 * @r: result var
 * @size_r: size of r
 * Return: r pointerr.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int total, i, j, k, l, aux, addition, dec, nu1, nu2;

	l = k = remain =  0;
	for (i = 0; n1[i] != '\0'; i++)
	{}
	for (j = 0; n2[j] != '\0'; j++)
	{}
	if (i + 2 > size_r || j + 2 > size_r)
	{
		return (0);
	}
	i--;
	j--;
	while (i >= 0 || j >= 0)
	{
		nu1 = 0;
		nu2 = 0;
		if (i >= 0)
			nu1 = n1[i--] - '0';
		if (j >= 0)
			nu2 = n2[j--] - '0';
		addition = nu1 + nu2 + dec;
		if (addition > 9)
		{
			dec = 1;
			addition -= 10;
		}
		else
			dec = 0;
		r[k++] = (addition + '0');
	}
	if (dec == 1)
		r[k++] = (1 + '0');
	aux = k;
	k = k - 1;
	for (l = 0; l < k; l++, k--)
	{
		total = r[k];
		r[k] = r[l];
		r[l] = num;
	}
	r[aux] = '\0';
	return (r);
}
