#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: an input
 * @str: an input
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = strlen(str);
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
