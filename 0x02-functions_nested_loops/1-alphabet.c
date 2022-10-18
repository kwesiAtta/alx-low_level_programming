#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
	char ca;

	for (ca = 'a'; ca <= 'z'; ca++)
		_putchar(ca);

	_putchar('\n');
}
