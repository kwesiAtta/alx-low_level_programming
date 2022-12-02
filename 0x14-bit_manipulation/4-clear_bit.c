#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: a pointer tothe bit
 * @index: the index to set the value at - indices starts at 0
 *
 * Return: If it fails -1, if success 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
