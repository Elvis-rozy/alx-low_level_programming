#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @s: the string
 *
 * Return: the length of the string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		printf("%d",s[i]);
		i++;
	}
	printf("\n");
}
