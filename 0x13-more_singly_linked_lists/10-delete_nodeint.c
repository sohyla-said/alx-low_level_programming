#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: an input
 * @index: an input
 * Return: 1 if succeeded -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *ptr = *head, *delete;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(ptr);
	}
	else
	{
		while (i < index)
		{
			ptr = ptr->next;
			i++;
			if (ptr == NULL)
				return (-1);
		}
		delete = ptr->next->next;
		free(delete);
	}
	return (1);
}
