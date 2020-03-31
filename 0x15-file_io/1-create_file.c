#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: pathname to the file
 * @text_content: content to write in the nre file
 * Return: Return 1 on succes, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int filedes, writed, size = 0, error = -1;

	if (!filename)
		return (-1);

	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filedes == error)
		return (-1);

	if (text_content)
	{
		for (; *(text_content + size); size++)
		{};

		writed = write(filedes, text_content, size);
		if (writed == error)
			return (-1);
	}

	close(filedes);
	return (1);
}
