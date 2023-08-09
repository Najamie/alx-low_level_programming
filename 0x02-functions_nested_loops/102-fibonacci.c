#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;
	long d = 0, e = 1, f;

	for (c = 0; c < 50; c++)
	{
		f = d + e;
		printf("%lu", f);

		d = e;
		e = f;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
