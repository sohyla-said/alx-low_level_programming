#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: an input
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
