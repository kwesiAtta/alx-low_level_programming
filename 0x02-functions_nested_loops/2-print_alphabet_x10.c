#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int tens;
	int ca;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ca = 'a'; ca <= 'z'; ca++)
			_putchar(ca);

		_putchar('\n');
	}
}
