#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 30;
	p = &n;
	_putchar("%d", n);
	_putchar("\n");
	*p = 98;
	_putchar("%d", n);
	_putchar("\n");
}
