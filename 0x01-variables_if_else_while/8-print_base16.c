#include <stdio.h>
/**
 * main - base '16' in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	int b;

	c = 'a';
	b = 0;
	while
		(b < 10) {
			putchar(b + '0');
			b++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
