/**
 * _strcpy - clone an array
 * @dest: arr of destine
 * @src: arr source
 * Return: dest array
 */
char *_strcpy(char *dest, char *src)
{
	int sizeSrc, el;

	for (sizeSrc = 0; *(src + sizeSrc) != '\0'; sizeSrc++)
	{}

	for (el = 0; el <= sizeSrc; el++)
	{
		*(dest + el) = *(src + el);
	}
	return (dest);
}
