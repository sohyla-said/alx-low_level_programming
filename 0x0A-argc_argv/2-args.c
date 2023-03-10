#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: an input
 * @argv: an input
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
