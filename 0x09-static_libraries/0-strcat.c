/**
 * _strcat - append src to dest
 * @dest: first string
 * @src: string to be appended
 * Return: final dest string
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (i = i; *src; i++)
	{
		*(dest + i) = *src++;
	}
	return (dest);
}
