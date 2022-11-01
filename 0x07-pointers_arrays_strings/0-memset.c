#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: starting address of the memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unassigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
