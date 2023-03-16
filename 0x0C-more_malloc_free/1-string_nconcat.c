#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: an input
 * @s2: an input
 * @n: an input
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;
	s = malloc(len1 + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			s[i] = *s1, s1++;
		else
			s[i] = *s2, s2++;
	}
	s[len1 + n] = '\0';
	return (s);
}
