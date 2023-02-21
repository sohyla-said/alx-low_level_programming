#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Check description
 * @c: An input character
 * Description: It checks for alphabetic character
 * Return: 1 if is alphabetic or 0 if is not alphabetic
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
