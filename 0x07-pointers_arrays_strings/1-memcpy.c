#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory
 * @src: source memory
 * @n: numberof bytes to be copied
 *
 * Return: string copies from source
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
