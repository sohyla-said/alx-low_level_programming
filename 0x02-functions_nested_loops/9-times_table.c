#include "main.h"

/**
 * times_table - Check description
 * Description: It prints the 9 times table starting with 0
 * Return: Nothing
 */
void times_table(void)
{
	int x, y, res;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			res = x * y;
			if ((res / 10) == 0)
			{
				_putchar(res + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


