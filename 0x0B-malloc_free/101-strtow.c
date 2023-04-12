#include "main.h"

/**
 * strtow - function to splits string into words;
 * @str: string to be sprited;
 *
 * Return: to an array otherwise "NULL".
 */
char **strtow(char *str)
{
	int ln, y, x, i, z, a, j;
	char **w, *m;

	ln = 0;
	while (str[ln])
		ln++;
	y = stwct(str);
	if (y == 0)
		return (NULL);

	w = malloc((y + 1) * sizeof(char *));
	if (w == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (x = 0; x <= ln; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (i)
			{
				z = x;
				m = malloc((i + 1) * sizeof(char));
				if (m == NULL)
					return (NULL);

				while (a < z)
					*m++ = str[a++];
				*m = '\0';
				w[j] = m - i;
				j++;
				i = 0;
			}
		}
		else if (i++ == 0)
			a = x;
	}
	w[j] = NULL;

	return (w);
}

/**
 * stwct - my function to count the number of character in a word;
 * @st: our string with words to be used;
 *
 * Return: the resulting number of characters in a word.
 */
int stwct(char *st)
{
	int l, d, n;

	d = 0;
	l = 0;
	n = 0;
	while (st[n] != '\0')
	{
		if (st[n] == ' ')
			d = 0;
		else if (d == 0)
		{
			d = 1;
			l++;
		}
		n++;
	}
	return (l);
}
