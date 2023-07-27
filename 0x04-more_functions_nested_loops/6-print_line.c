#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 *@n: number of input
 */
void print_line(int n)
{
	while (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
