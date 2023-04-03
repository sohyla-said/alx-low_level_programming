#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: an input
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->next);
		free(ptr);
	}
	free(head);
}
