#include "main.h"
#include <ctype.h>

/**
 * _islower - Check description
 * @c: An input character
 * Description: It checks for lowercase character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
