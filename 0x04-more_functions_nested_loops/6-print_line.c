#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: An input integer
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
