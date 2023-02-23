#include "main.h"
#include <ctype.h>

/**
 * _isupper - Check description
 * @c: An input integer
 * Description: It checks for uppercase character
 * Return: 1 if is uppercase or 0 if is lowercase
 */
int _isupper(int c)
{

	if (isupper(c))
		return (1);
	else
		return (0);
}
