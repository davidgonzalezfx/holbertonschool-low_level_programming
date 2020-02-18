/**
 * _atoi - cast str to int
 * @s: str
 * Return: int
 */
int _atoi(char *s)
{
	int size, cnt, aux;

	aux = 1;
	cnt = 0;
	for (size = 0; *(s + size) != '\0'; size++)
	{
		if (*(s + size) == '-' && aux == 0)
		{
			aux = 1;
		}
		else if (*(s + size) == '-' && aux == 1)
		{
			aux = 0;
		}
		if (*(s + size) == '+' && aux == 1)
		{
			aux = 1;
		}
		else if (*(s + size) == '+' && aux == 0)
		{
			aux = 0;
		}
		if (*(s + size) >= '0' && *(s + size) <= '9')
		{
			cnt = (cnt * 10) + (*(s + size) - '0');
			if (!(*(s + size + 1) >= '0' && *(s + size + 1) <= '9'))
				break;
		}
	}
	if (cnt == 0)
		return (0);
	if (aux == 0)
		return (cnt *= -1);
	return (cnt);
}
