#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int a;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
