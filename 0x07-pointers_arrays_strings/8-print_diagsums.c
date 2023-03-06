#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals in square matrix
 * @a: an input
 * @size: an input
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, end = size * size;

	for (i = 0; i < end; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < end - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
