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
	mode_t mode1 = O_CREAT | O_RDWR | O_TRUNC;
	mode_t mode2 = S_IRUSR | S_IWUSR/* or `O600` in octal notation */;
	int wr, fd, strln = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, mode1, mode2);
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
