#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */


int _strlen(char *s)
{
	int lenn = 0;
	int str_lenn = 0;

	while (*s != '\0')
	{
		lenn++;
		s++;
	}

	return (lenn);
}

