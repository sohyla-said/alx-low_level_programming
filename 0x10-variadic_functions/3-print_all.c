#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: an input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
