#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elemenst in a list
 * @h: an input
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
