#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new element at the end
 * @head: an input
 * @str: an input
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len = strlen(str);

	ptr = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;

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
