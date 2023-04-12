#include "main.h"

/**
 * strtow - function to splits string into words;
 * @str: string to be sprited;
 *
 * Return: to an array otherwise "NULL".
 */
char **strtow(char *str)
{
	int x, i, y, j, z, ln;
	char **w;

	if (str == NULL || str == 0)
		return (NULL);
	y = x = ln = 0;
	while (str[ln])
	{
		if (str[ln] != ' ')
		{
			for (x = 1; str[ln] != ' ' && str[ln] != '\0';)
				x++;
			for(y = 1; str[ln + 1] == ' ' || str[ln + 1] == '\0';)
				y++;
		}
		ln++;
	}

	w = malloc((ln + 1) * sizeof(char));
	if (w == NULL)
		return (NULL);
	for (z = 0; z < ln; z++)
	{
	for (j = 0; j <= y; j++)
	{
		i = 0;
		while (str[z] != ' ' || str[z] != '\0')
		{
			w[j][i] = str[z];
			i++;
		}
		i = 0;
		while ((str[z] == ' ' && str[z + 1] != ' ') || str[z] != '\0')
		{
			w[j][i] = '\0';
			i++;
		}
	}
	}
	w[j][i] = '\0';
	return (w);
}
/*
int strct(char *st)
{
	int x, y, i;

	y = x = i = 0;
        while (str[i])
        {
                if (str[i] != " ")
                {
                        x += 1;
                        if (str[i + 1] == ' ' && str[i + 1] != '\0')
                                return (x);
                                y += 1;
                }
                i++;
        }
        return (y);
}
*/
