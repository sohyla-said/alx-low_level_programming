#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns its data
 * @head: an input
 * Return: node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	ptr = *head;
	(*head) = (*head)->next;
	free(ptr);
	return (data);
}
