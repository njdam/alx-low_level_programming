#include "main.h"
/**
 * times_table - for printing tables
 * for: our loop to multiply our table
 * _putchar: to prints out tables
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		a = a * 0;
		_putchar(a + 48);
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar('\n');
	for (b = 0; b < 10; b++)
        {
		b = b * 1;
                _putchar(b + 48);
                _putchar(44);
                _putchar(32);
                _putchar(32);
	}
        _putchar('\n');
}
