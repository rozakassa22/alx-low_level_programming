#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reve = s[0];
	int count = 0;
	int x;
	int y;

	while (s[count] != '\0')
	count++;
	for (y = 0; y < count; y++)
	{
		count--;
		reve = s[y];
		s[y] = s[count];
		s[count] = reve;
	}
}

