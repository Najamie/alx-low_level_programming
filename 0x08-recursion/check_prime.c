/**
 * check_prime - Checks if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
    if (divisor >= n)
        return (1);

    if (n % divisor == 0)
        return (0);

    return (check_prime(n, divisor + 1));
}
