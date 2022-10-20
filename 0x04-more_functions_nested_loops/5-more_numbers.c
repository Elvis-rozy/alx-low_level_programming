#include "main.h"

/**
*more_numbers - print 10 times 01234567891011121314
*followed by a new line
*Return: void
*/

void more_numbers(void)
{
	int count = 0;
	int c, d;

	while (count++ <= 9)
	{
		for (c = '0'; c <= '9'; c++)
			_putchar(c);
		for (c = '10'; c <= '14'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
