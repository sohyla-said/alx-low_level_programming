#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: an input
 * @max: an input
 * Return: pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff = max - min, i;

	if (min > max)
		return (NULL);
	arr = malloc((diff + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
		arr[i] = min, min++;
	return (arr);
}
