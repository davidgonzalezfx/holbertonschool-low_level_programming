/**
 * cap_string - function that capitalizes all words of a string
 * @s: char*
 * Return: s capitalized
 */
char *cap_string(char *s)
{
	unsigned int i, j;
	char dic[12] = "\n ,;.!?\"(){}";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (s[i] == dic[j] || s[i] == 9)
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					*(s + i + 1) = *(s + i + 1) - 32;
		}
	}

	return (s);
}
