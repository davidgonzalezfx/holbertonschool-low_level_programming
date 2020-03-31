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

	/* Check for a valid filename, different to NULL*/
	if (!filename)
		return (-1);

	/* Try to open the file and start the fd*/
	/* If fd is equal to -1 (error), return -1*/
	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filedes == error)
		return (-1);

	/* If there is 'text_content', write*/
	if (text_content)
	{
		/* Get the size of 'text_contet'*/
		for (; *(text_content + size); size++)
		{};

		/* Write 'size' bytes of 'text_content' in filedes*/
		/* If 'writed' is equal to -1 (error), return -1*/
		writed = write(filedes, text_content, size);
		if (writed == error)
			return (-1);
	}

	/* Close iostream*/
	close(filedes);
	return (1);
}
