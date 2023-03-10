#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: an input
 * @accept: an input
 * Return: pointer to the byte in s that matches any of accept or NULl
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
