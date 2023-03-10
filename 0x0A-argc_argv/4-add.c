#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: an input
 * @argv: an input
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, result = 0, num;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (!(isdigit(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 0; i < argc; i++)
		{
			num = atoi(argv[i]);
			result += num;
		}
		printf("%d\n", result);
	}
	return (0);
}
