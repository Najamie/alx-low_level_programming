#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input intege
 * @n: an integer
 *
 * Return: 0 is a success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}
/**
 * actual_prime - calc num
 * @n: number 1
 * @i: iterator
 * Return: 1 if n is prime , else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
