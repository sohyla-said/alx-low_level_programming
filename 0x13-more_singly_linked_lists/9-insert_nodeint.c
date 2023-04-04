#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: an input
 * @idx: an input
 * @n: an input
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *ptr = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}
	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	new->next = ptr->next;
	ptr->next = new;
	new->n = n;
	return (new);
}
