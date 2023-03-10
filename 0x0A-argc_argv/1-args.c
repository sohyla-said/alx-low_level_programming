#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: an input
 * @argv: an input
 * Return: always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
