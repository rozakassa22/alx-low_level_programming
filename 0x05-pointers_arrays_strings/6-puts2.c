#include "main.h"
/**
 * puts2 - function that print one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lenn = 0;
	int x;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lenn++;
	}
	i = lenn - 1;
	for (o = 0 ; o <= i ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

