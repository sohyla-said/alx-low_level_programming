#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: an input
 * @needle: an input
 * Return: pointer to the begining of the located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
