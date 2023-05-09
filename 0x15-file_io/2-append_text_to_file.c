#include "main.h"

/**
 * append_text_to_file - a function to append a text at the end of of file;
 * @filename: is a file where to add a text;
 * @text_content: is text to be added to a file;
 *
 * Return: value 1 for success otherwise "-1" on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, strln = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[strln])
			strln++;
	}

	wr = write(fd, text_content, strln);
	if (wr == -1)
	{
		close(fd);

		return (-1);
	}

	close(fd);

	return (1);
}
