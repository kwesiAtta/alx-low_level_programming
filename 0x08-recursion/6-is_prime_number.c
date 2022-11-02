#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: num
 * @iterator: number to iterate
 * Return: 1 or 0
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}
	else if (num % iterator == 0)
	{
		return (0);
	}
	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}
	return (0);
}
/**
 * is_prime_number - returns 1 if the input value is a prime number
 * @n: integer
 *
 * Return: is a prime
 */

int is_prime_number(int n)
{
	int iterator = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (evaluate_num(n, iterator));
}
