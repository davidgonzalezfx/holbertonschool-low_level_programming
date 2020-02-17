/**
 * _atoi - cast str to int
 * @s: str
 * Return: int
 */
int _atoi(char *s)
{
	int num, size, i, cnt, aux;

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
			{
				if (aux == 0)
				{
					cnt *= -1;
				}
				break;
			}
		}
	}
	return (cnt);
}
