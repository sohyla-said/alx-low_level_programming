#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 *Description: It prints the word _putchar, followed by a new line
 * Return: 0.
 */
int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	while(i < 9)
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');

	return (0);

}
