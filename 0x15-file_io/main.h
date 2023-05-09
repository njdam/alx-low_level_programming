#ifndef MAIN_H
#define MAIN_H

#define SIZE 1024

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Prototype for Project's Task */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Other Prototype */
int _putchar(char c);
void fl_close(int fd);
char *make_buffer(char *contents);
void elf_check(unsigned char *el_id);
void magic_print(unsigned char *el_id);
void class_print(unsigned char *el_id);
void data_print(unsigned char *el_id);
void version_print(unsigned char *el_id);
void osabi_print(unsigned char *el_id);
void abi_print(unsigned char *el_id);
void type_print(unsigned int el_type, unsigned char *el_id);
void entry_print(unsigned long int el_entry, unsigned char *el_id);
void elf_close(int elf);

#endif /* MAIN_H */
