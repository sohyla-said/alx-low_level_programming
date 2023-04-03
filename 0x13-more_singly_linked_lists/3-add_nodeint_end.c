#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end
 * @head: an input
 * @n: an input
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
