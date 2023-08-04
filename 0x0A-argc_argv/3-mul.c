#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program two integers
 * @argc: count argement
 * @argv: argument
 * Return: 0 if two, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}

