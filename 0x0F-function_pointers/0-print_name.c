#include "function_pointers.h"

/**
 * print_name - a function to prints a name;
 * @name: name to be printed;
 * @f: a pointer to a function with paramenter pointing to char;
 *
 * Return: value is nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL || name == NULL)
		return;
	(*f)(name);
}
