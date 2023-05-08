#include "main.h"

#define BUFSZ 1024
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
	char *buffer = malloc(BUFSZ * sizeof(char));
	int src, rd, wr, dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	src = open(argv[1], O_RDONLY);
	rd = read(src, buffer, BUFSZ);
	while (rd > 0)
	{
	if (src == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(dest, buffer, BUFSZ);
	if (dest == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	rd = read(src, buffer, BUFSZ);
	dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close(src);
	close(dest);

	return (0);
}
