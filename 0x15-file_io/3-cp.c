#include "holberton.h"
#include <stdio.h>

void handle_error(char *av, int posx, int e);
/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @agv: argument array
 * Return: 0
 */
int main(int ac, char **agv)
{
	/* Creating needed variables */
	int file_from, file_to, error = -1, writed, readed = 1024, closed;
	char buffer[1024];

	/* Throw error if not exactly 3 arguments */
	if (ac != 3)
		handle_error("", 0, 0);

	/* Try to open first file received as argument */
	/* Throw error if file_from value equals to -1 (error) */
	file_from = open(agv[1], O_RDONLY);
	if (file_from == error)
		handle_error(agv[1], 0, 1);

	/* Try to open second file received as argument */
	/* Throw error if file_to value equals to -1 (error) */
	file_to = open(agv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		handle_error(agv[2], 0, 2);



	/* Read 1024 bytes at a time from file_from to make less system calls */
	readed = read(file_from, buffer, 1024);
	/* Throw error if file_from can't be readed */
	if (readed == error)
		handle_error(agv[1], 0, 1);

	/* Write 'readed' bytes from buffer, to 'file_to' */
	writed = write(file_to, buffer, readed);
	/* Throw error if file_to can't be writed */
	if (writed == error)
		handle_error(agv[2], 0, 2);


	/* Try to close file_from iostream */
	/* Throw error file_to can't be closed */
	closed = close(file_from);
	if (closed == error)
		handle_error("", closed, 3);

	/* Try to close file_to iostream */
	/* Throw error file_to can't be closed */
	closed = close(file_to);
	if (closed == error)
		handle_error("", closed, 3);
	return (0);
}

/**
 * handle_error - handling print errors
 * @av: arguments array
 * @posx: output of POSIX funs
 * @e: error to print
 */
void handle_error(char *av, int posx, int e)
{
	/* We receive 0 if arguments aren't exactly 3 */
	if (e == 0)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* We receive 1 if file_from can't be readed  */
	else if (e == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
	/* We receive 2 if file_to can't be writed  */
	else if (e == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		exit(99);
	}
	/* We receive 3 if file_from or file_to can't be closed  */
	else if (e == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", posx);
		exit(100);
	}
}
