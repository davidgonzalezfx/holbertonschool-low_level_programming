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

	/* Check for a valid filename, different to NULL*/
	if (!filename)
		return (-1);

	/* Try to open the file and start the fd*/
	/* If fd is equal to -1 (error), return -1*/
	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == error)
		return (-1);

	/* If there is 'text_content', append*/
	if (text_content)
	{
		/* Get the size of 'text_contet'*/
		for (; *(text_content + size); size++)
		{};

		/* Appenda 'size' bytes of 'text_content' in filedes*/
		/* If 'writed' is equal to -1 (error), return -1*/
		writed = write(filedes, text_content, size);
		if (writed == error)
			return (-1);
	}

	/* Close iostream*/
	close(filedes);
	return (1);
}
