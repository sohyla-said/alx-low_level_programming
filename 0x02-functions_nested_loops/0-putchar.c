#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
