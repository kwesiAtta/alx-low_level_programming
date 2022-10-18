#include "main.h"

/**
 * print_alphabet - function to print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
		_putchar(ca);

	_putchar('\n');
}
