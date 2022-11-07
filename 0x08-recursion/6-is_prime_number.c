#include "main.h"

/**
 * check - checks if input is prime number
 * @e: integer
 * @l: integer
 * Return: int
 */
int check(int e, int l)
{
	if (l < 2 || l % e == 0)
	{
		return (0);
	}
	else if (e > l / 2)
	{
		return (1);
	}
	else
	{
		return (check(e + 1, l));
	}
}
/**
 * is_prime_number - states if number is prime
 * @n:integer
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
