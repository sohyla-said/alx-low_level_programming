#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: an input
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
