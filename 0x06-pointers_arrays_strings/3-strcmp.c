#include "main.h"
#include <string.h>

/**
 * _strcmp - compares 2 strings
 * @s1: an input
 * @s2: an input
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) > 0)
		return (15);
	if (strcmp(s1, s2) < 0)
		return (-15);
	else 
		return (0);
}
