#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry poitn
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, s, b;

	for (x = 0; x < 100; x++)
	{
		s = (x / 10) + '0';
		b = (x % 10) + '0';
		if (s != b )
		{
			putchar(s);
			putchar(b);
			if (x != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
/* needs to be modified, it doesn't work correctly*/
}
