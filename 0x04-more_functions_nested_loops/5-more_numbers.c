#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14;)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
	}
}
