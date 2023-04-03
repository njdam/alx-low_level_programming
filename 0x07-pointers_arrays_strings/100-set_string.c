#include "main.h"

/**
 * set_string - a function that set a pointer to a character;
 * @s: our parameter pointing a character "to";
 * @to: a character to be pointed;
 *
 * Return: type is "void".
 */
void set_string(char **s, char *to)
{
	*s = to;
	s = &to;
}
