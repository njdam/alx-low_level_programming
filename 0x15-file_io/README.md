# C-File I/O

## Introduction

In C, file input/output (I/O) is performed using the `stdio.h` library, which provides functions for reading from and writing to files.
The basic steps for file I/O in C are as follows:

1. Open the file using the `fopen()` function, which returns a file pointer. The function takes two arguments: the name of the file to open, and the mode in which to open it (e.g. "`r`" for read mode, "`w`" for write mode, "`a`" for append mode, etc.). If the file cannot be opened, `fopen()` returns `NULL`.

2. Perform the desired read or write operations using functions such as `fread()`, `getc`, `getw`, `gets`, `fwrite()`, `putc`, `putw`, `puts`, `fscanf()`, `fprintf()`, etc. These functions take the file pointer as their first argument, and the data to read or write as their remaining arguments.

3. Close the file using the `fclose()` function, which takes the file pointer as its argument. This ensures that any buffered data is written to the file and that the file is properly released.

## Project Task's Questions

### MANDATORY TASK

0. Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

1. Under the snow

Create a function that creates a file.

2. Speak gently, she can hear

Write a function that appends text at the end of a file.

3. cp

Write a program that copies the content of a file to another file.


### ADVANCED TASK

4. elf (Qn.100)

Write a program that displays the information contained in the ELF header at the start of an ELF file.


................................END...............................
