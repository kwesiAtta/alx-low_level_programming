#include <unistd.h>
/**
 * _putchare - write the character c to stdout
 * @c: the chracter to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
