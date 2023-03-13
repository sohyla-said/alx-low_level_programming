#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _srdup - returns pointer to a newly allocated space which
 * contains a copy of the string given
 * @str: an input
 * Return: pointer to the duplicated string or NULL if fails
 */
char *_strdup(char *str)
{
	char *new;
	int i, len = strlen(str);

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(char) * (len + 1));

	if (new != NULL)
	{
		for (i = 0; i < len; i++)
		{
			new[i] = *str;
			str++;
		}
		new[len] = '\0';
		return (new);
	}
	else
		return (NULL);
}
