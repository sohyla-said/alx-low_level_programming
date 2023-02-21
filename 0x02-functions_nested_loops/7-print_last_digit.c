#include "main.h"

/**
 * print_last_digit - Check description
 * @n: An input integer
 * Description: It prints the last digit of a number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}

