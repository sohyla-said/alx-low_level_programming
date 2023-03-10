#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates 2 strings
 * @dest: an input
 * @src: an input
 * @n: an input
 * Return:a pointer to the resulting dtring
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = strncat(dest, src, n);

	return (result);
}
