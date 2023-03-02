#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @s: an input
 * Return: resulted string
 */
char *rot13(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
	}
	return (s);
}
