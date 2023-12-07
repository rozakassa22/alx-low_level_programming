#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the element
 * @h: The double linked list to prints
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
