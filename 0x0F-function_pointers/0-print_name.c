#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: an input
 * @f: an input
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
