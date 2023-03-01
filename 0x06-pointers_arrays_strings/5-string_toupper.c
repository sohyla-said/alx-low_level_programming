#include "main.h"
#include <string.h>

/**
 * string_toupper - change all lowercase letters of a string to upper
 * @s: an input
 * Return: resulted string
 */
char *string_toupper(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
