#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: an input
 * @f: an input
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
