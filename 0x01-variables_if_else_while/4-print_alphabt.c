#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowAlpha;


	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		if (lowAlpha != 'q' && lowAlpha != 'e')
		{
			putchar(lowAlpha);
		}
	}

	putchar('\n');
	return (0);
}
