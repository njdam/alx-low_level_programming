#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *setmem0(char *arr, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *cpcont(char *ptr, char *new_ptr, unsigned int n_size);
int _isdigit(char *str);
int strln(char *str);
void error_msg(void);
int *multi(int ln1, int ln2, char *str1, char *str2, int *mul);

#endif /* MAIN_H */
