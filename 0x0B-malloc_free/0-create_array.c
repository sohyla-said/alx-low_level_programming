#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: an input
 * @c: an input
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
