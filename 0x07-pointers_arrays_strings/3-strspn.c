#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: an input
 * @accept: an input
 * Return: number of bytes in initial segment of s containig accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
