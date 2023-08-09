#include <stdio.h>
#include "main.h"
/**
 * main - fizz and buzz
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a == 1)
			printf("%d", a);
		else if (a % 3 == 0 && a % 5 != 0)
			printf("%s", " Fizz");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("%s", " Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("%s", " FizzBuzz");
		else
			printf(" %d", a);
	}
	printf("\n");
	return (0);
}
