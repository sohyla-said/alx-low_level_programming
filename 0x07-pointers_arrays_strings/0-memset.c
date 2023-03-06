#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: an input
 * @b: an input
 * @n: an input
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
