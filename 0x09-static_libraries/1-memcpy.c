#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: an input
 * @src: an input
 * @n: an input
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
