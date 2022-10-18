#include "main.h"

/**
 *test_islower - checks if a character is lowercase
 *@c: the character
 * Return: Always 1 if the letter is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
