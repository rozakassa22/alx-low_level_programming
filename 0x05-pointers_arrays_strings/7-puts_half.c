#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, lenn, i;

	lenn = 0;

	for (a = 0; str[a] != '\0'; a++)
		lenn++;

	n = (lenn / 2);

	if ((lenn % 2) == 1)
		n = ((lenn + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

