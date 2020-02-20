/**
 * string_toupper - lowercase to uppercase
 * @s: string
 * Return: string to uppercase
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			*(s + i) = (*(s + i) - 32);
	}

	return (s);
}
