#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path name to the file
 * @letters: num of letters inside the file
 * Return: The number of letters readed-printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes, readed, writed, error = -1;
	char *buffer;

	/* Check for a valid filename, different to NULL*/
	if (!filename)
		return (0);

	/* Try to open the file and start the fd*/
	/* If fd is equal to -1 (error), return 0*/
	filedes = open(filename, O_RDONLY);
	if (filedes == error)
		return (0);

	/* Allocates memory to save file in buffer*/
	/* And checks that buffer was allocated correctly*/
	buffer = malloc(letters);
	if (!buffer)
		return (0);

	/* Read the file and save 'letters' num bytes in buffer*/
	/* Then try to write to STDOUT, 'readed' bytes from buffer*/
	/* If write syscall return -1 (error), saved in 'writed' return 0*/
	readed = read(filedes, buffer, letters);
	writed = write(STDOUT_FILENO, buffer, readed);
	if (writed == error)
		return (0);

	close(filedes);
	return (writed);
}
