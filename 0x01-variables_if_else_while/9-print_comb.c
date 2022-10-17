#include <stdio.h>
/**
 * main - possible combination of single digits numbers
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
