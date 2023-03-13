#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: an input
 * @s2: an input
 * Return: pointer to the new string or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0, len1 = strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new != NULL)
	{
		for (; i < (len1 + len2); i++)
		{
			if (i < len1)
			{
				new[i] = *s1;
				s1++;
			}
			else
			{
				new[i] = *s2;
				s2++;
			}
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (NULL);
}
