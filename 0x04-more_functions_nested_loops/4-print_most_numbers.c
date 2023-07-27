#include "main.h"
/**
 * print_most_numbers - a function that print 0-9 while 2 and 4
 *
 * Return: always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
			_putchar(i);
			}
		}
	}
	_putchar('\n');
}
