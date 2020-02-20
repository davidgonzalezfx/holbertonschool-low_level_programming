/**
 * cap_string - function that capitalizes all words of a string
 * @s: char*
 * Return: s capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	char *dic = "   \n ,;.!?\"(){}";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < sizeof(dic); j++)
		{
			if (s[i] == dic[j] || s[i] == 9)
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					*(s + i + 1) = *(s + i + 1) - 32;
		}
	}

	return (s);
}
