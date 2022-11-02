#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer input
 * @y: integer input
 * Return: -1 if y less than 0
 */

int _pow_recursion(int x, int y)
{
	int b = (x * _pow_recursion(x, y - 1));

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (b);
	}
	else
	{
		return (1);
	}
}
