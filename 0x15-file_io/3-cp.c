#include "main.h"

/**
 * main - a function to copy content from one file to another;
 * @argc: numbers of of arguments on program command line;
 * @argv: an array of storing arguments;
 *
 * Return:  value 0 for success;
 * Error, exit with 97 on incorrect arg or 98 on can't read or 99 not written.
 */
int main(int argc, char *argv[])
{
	int src, rd, wr, dest;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buffer, SIZE);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(dest, buffer, rd);
		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(src, buffer, SIZE);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	fl_close(src);
	fl_close(dest);

	return (0);
}

/**
 * fl_close - a function to close a file descripter;
 * @fd: is file descriptor to be used;
 *
 * Return: is nothing.
 */
void fl_close(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * make_buffer - a function to close a file descripter;
 * @contents: is file's contents from argument;
 *
 * Return: is nothing.
 */
char *make_buffer(char *contents)
{
	char *buffer = malloc(SIZE * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", contents);
		exit(99);
	}

	return (buffer);
}
