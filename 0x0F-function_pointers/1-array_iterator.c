#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as paramters
 * @array: an input
 * @size: an input
 * @action: an input
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
