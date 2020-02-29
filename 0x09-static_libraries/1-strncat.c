/**
 * _strncat - copy n chars
 * @dest: dest string
 * @src: src string
 * @n: number of chars to copy
 * Return: dest 'till n
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, cnt;

	cnt = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (i = i; *src && cnt < n; i++, cnt++)
	{
		*(dest + i) = *src++;
	}
	return (dest);
}
