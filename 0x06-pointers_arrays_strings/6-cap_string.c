#include "main.h"
#include <string.h>

int check_separator(char c);

/**
 * cap_string - capitalizes all words of a string
 * @s: an input
 * Return: resulted string
 */
char *cap_string(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (check_separator(s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] -= 32;
	}
	return (s);
}

/**
 * check_separator - checks for separators of words
 * @c: an input
 * Return: integer
 */
int check_separator(char c)
{
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?'};
	char sep2[] = {'"', '(', ')', '{', '}' };
	int i;

	for (i = 0; i < 8; i++)
	{
		if (c == sep[i] || c == sep2[i])
			return (1);
	}
	return (0);
}
