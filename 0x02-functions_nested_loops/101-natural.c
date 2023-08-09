#include <stdio.h>
/**
 * main - Print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, z;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 3 == 0) || (z % 5 == 0))
		{
			i += z;
		}
	}
	printf("%d\n", i);
	return (0);
}
