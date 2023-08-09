#include "main.h"
/**
 * print_square - print a square
 * @size: size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
		_putchar('\n');
	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
