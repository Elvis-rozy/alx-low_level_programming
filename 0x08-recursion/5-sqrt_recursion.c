#include "main.h"

/**
 * check - checks for the square root
 * @c: integer
 * @x: integer
 */

int check(int c, int x)
{
	if (c * c == x)
	{
		return (c);
	}
	else if (c * c > x)
	{
		return (-1);
	}
	else
	{
		return (check(c + 1, x));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: square root else -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (check(1, n);
	}
}
