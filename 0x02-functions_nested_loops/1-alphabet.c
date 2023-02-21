#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase followed by a new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

}
