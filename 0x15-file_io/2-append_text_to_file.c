#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path to the file
 * @text_content: content to append to the file
 * Return: 1 if success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, writed, size = 0, error = -1;

	if (!filename)
		return (-1);

	filedes = open(filename, O_WRONLY | O_APPEND);
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
