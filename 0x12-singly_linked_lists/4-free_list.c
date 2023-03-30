#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: an input
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
