#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: an input
 * @argv: an input
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
