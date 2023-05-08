#include "main.h"

/**
 * read_textfile - a function to read a tex file and prints it to POSIX stdout;
 * @filename: is pointer to a file name;
 * @letters: is a number of letters it could write and read;
 *
 * Return: numbers of writen letters otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		close(fd);

		return (0);
	}

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (rd == -1 || wr != rd)
	{
		free(buffer);
		close(fd);

		return (0);
	}

	free(buffer);
	close(fd);

	return (wr);
}
