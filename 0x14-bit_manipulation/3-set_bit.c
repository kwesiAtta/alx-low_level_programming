#include "main.h"

/**
 * set_bit - sets the value of the bit to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it success, -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
