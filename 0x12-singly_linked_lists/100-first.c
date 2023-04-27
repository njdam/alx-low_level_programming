#include "lists.h"

/**
 * before_main - a function that prints before main function execution;
 * __attribute__((constructor)): attribute is used to
 * mark "before_main" as "constractor";
 *
 * Return: nothing.
 */
void __attribute__((constructor)) before_main()
{
	char *str = "You're beat! and yet, you must allow,\n";
	char *next_str = "I bore my house upon my back!\n";

	printf("%s%s", str, next_str);
}
