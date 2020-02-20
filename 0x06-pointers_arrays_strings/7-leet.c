/**
 * leet - encode a string into 1337
 * @s: string
 * Return: s encoded
 */
char *leet(char *s)
{
	int i, j;
	char letter[5] = "aeotl";
	char bcrypt[5] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == (letter[j] - 32))
				s[i] = bcrypt[j];
		}
	}
	return (s);
}
