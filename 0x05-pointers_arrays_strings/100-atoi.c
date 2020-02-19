/**
 * _atoi - cast str to int
 * @s: str
 * Return: int
 */
int _atoi(char *s)
{
	int size, aux;

	aux = 1;
	unsigned int cnt = 0;
	for (size = 0; *(s + size) != '\0'; size++)
	{
		if (*(s + size) == '-')
		{
			aux *= -1;
		}
		if (*(s + size) >= '0' && *(s + size) <= '9')
		{
			cnt = (cnt * 10) + (*(s + size) - '0');
			if (!(*(s + size + 1) >= '0' && *(s + size + 1) <= '9'))
				break;
		}
	}
	return (cnt * aux);
}
