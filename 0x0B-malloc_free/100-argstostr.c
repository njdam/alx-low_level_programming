#include "main.h"

/**
 * argstostr - function to concentrates all arguments.
 * @ac: is number of program command line arguments;
 * @av: is arguments to be concentrated;
 *
 * Return: a ponter to new string otherwise "NULL".
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, ln;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	ln = 0;
	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x]; x++)
			ln++;
	}
	ln = ln + ac;
	ar = malloc((ln + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	z = 0;
	for (y = 0; y < ac; y++)
	{
		for (x = 0; av[y][x] != '\0'; x++)
		{
			ar[z] = av[y][x];
			z++;
		}
		ar[z] = '\0';
		if (ar[z] == '\0')
			ar[z++] = ('\n');
	}
	return (ar);
}
