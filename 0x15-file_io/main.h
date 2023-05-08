#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Prototype for Project's Task */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Other Prototype */
int _putchar(char c);
void fl_close(int fd);

#endif /* MAIN_H */
