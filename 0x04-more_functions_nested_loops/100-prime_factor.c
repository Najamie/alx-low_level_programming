#include <stdio.h>
#include "main.h"
/**
 * main - print largest prime number
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a = 612852475143, b;

	while (b < (a / 2))
	{
		if ((a % 2) == 0)
		{
			b /= 2;
			continue;
		}
		for (b = 3; b < (a / 2); b += 2)
		{
			if ((a % b) == 0)
				a /= b;
		}
	}
	printf("%ld\n", a);
	return (0);
}
