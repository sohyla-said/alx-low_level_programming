#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: an input
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	putchar('\n');
}
