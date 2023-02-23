#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit
 * @c: An input integer
 * Return: 1 if is a digit or 0 if is not
 */
int _isdigit(int c)
{

	if (isdigit(c))
		return (1);
	else
		return (0);
}
