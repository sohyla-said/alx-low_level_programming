#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: an input
 * @src: An input
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *result = strcat(dest, src);

	return (result);
}
