#include <stdio.h>
#include <unistd.h>
/**
 * main - our function to start program
 * fwrite: as our main function to prints
 *
 * Return: with value 1 to stop program
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
