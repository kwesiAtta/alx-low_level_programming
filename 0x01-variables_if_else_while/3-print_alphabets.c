#include <stdio.h>

/**
 * main - prints alphabets in lower and uppercase
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char k;

	char l;

	k = 'a';
	l = 'A';
	while
		(k <= 'z') {
			putchar(k);
			k++;
		}
	while
		(l <= 'Z') {
			putchar(l);
			l++;
		}
	putchar('\n');
	return (0);
}
