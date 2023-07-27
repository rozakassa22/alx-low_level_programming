#include "main.h"
/**
 * _isdigit - compare weather a function is digit or not
 * @c: is a digit int
 * Return: return a 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

