#include "main.h"

/**
 *  * _puts_recursion - prints a string, followed by a new line.
 *   * @s: String to be printed
 *    */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putcher(*s);
	        _puts_recursion(s + 1);

	}
	else
		_putcher('\n')
}
