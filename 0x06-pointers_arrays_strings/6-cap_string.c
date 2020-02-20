/**
 * cap_string - function that capitalizes all words of a string
 * @s: char*
 * Return: s capitalized
 */
char *cap_string(char *s)
{
	unsigned int i, j;
	char dic[13] = "\n \t,;.!?\"(){}";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < sizeof(dic); j++)
		{
			if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			{
				*(s + 0) = *(s + 0) - 32;
			}
			else if (s[i] == dic[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					*(s + i + 1) = *(s + i + 1) - 32;
				}
			}
		}
	}
	return (s);
}
