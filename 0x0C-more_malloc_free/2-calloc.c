#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: an input
 * @size: an input
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	for (i = 0; i < nmemb * size; i++)
		*(arr + i) = 0;
	return (arr);
}
