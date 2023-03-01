#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content on an array
 * @a: an input
 * @n: an input
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
