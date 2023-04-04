#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: an input
 * @index: an input
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
