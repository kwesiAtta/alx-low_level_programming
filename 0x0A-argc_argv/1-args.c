#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, int *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
