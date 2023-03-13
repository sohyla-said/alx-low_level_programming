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
	char *new, *str1, *str2;
	int i = 0, len1 = strlen(s1), len2 = strlen(s2);

	str1 = s1;
	str2 = s2;

	if (s1 == NULL)
		s1 = "";
	s1 = str1;

	if (s2 == NULL)
		s2 = "";
	s2 = str2;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	str1 = new;

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
		return (str1);
	}
	else
		return (NULL);
}
