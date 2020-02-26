#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char
 * Return: int - length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * aux - aux function where are all the logic
 * @s: char
 * @rev: int dinamic
 * @p: int fixed
 * Return: int - length
 */
int aux(char *s, int rev, int p)
{
	rev--;
	if (*s == s[rev] && *(s + 1))
	{
		aux(++s, --rev, p);
	}
	else
		return (0);
	return (1);
}
/**
 * is_palindrome - check palindrome word
 * @s: char
 * Return: int i if yes, 0 if not
 */
int is_palindrome(char *s)
{
	int p;

	p = _strlen_recursion(s);
	if (p == 0)
		return (0);
	if (*s)
		return (aux(s, p, p));
	return (0);
}
