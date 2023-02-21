#include "main.h"

/**
 * print_sign - Check description
 * @n: An input integer
 * Description: It prints the sign of a number
 * Return: 1 if is positive or 0 if is zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
