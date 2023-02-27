#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: an input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = strlen(s), i;
	char tmp;

	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = tmp;
		len--;
	}
}
