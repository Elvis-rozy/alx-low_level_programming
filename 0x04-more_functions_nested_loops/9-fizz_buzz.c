#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * with Fizz in multiples of 3
 * Buzz in multiples of 5
 * and FizzBuzz in multiples of both
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%a", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

