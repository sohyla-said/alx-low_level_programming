#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: an input
 * @argv: an input
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
