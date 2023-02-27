#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: an input
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = strlen(str), i;
	int n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
