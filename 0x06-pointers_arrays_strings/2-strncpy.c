#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: an input
 * @src: an input
 * @n: an input
 * Return: a pointer to the result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = strncpy(dest, src, n);

	return (result);
}
