#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: an input
 * @c: an input
 * Return: pointer to first occurrence of c or NULL if is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
