#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
