#include "main.h"

/**
 * create_file - a function to create a file;
 * @filename: is the name of a file to be created;
 * @text_content: is a string to be written to a file;
 *
 * Return: value of 1 on success otherwise -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int wr, fd, strln = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/* `S_IRUSR | S_IWUSR` or `0600` in octal notation */
	if (fd == -1)
		return (-1);

	while (text_content[strln])
		strln++;

	wr = write(fd, text_content, strln);
	if (wr == -1)
	{
		close(fd);

		return (-1);
	}

	close(fd);

	return (1);
}
