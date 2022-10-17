#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
 */
=======
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

>>>>>>> b43cde56263ed46f67db77114f692b85f04003c2
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
=======
	if (n > 2)
		printf("%d is positive\n", n);
	else if (n == 2)
>>>>>>> b43cde56263ed46f67db77114f692b85f04003c2
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
