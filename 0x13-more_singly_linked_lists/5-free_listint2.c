#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: an input
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
