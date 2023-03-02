#include "main.h"
#include <string.h>

/**
 * leet - encodes a string to 1337
 * @s: an input
 * Return: resulted string
 */
char *leet(char *s)
{
	int len = strlen(s), i, j;
	char str1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[] = {'4', '4', '3', '3', '0', '0', '7', '7',  '1', '1'};

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str1[j])
				s[i] = sub[j];
		}
	}
	return (s);
}
