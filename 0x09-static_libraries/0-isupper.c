/**
 * _isupper - check for upper case
 * @c: char
 * Return: int
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
