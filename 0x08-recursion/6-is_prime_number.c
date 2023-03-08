#include "main.h"
int isprime(int n, int i);

/**
 * is_prime_number - check if the number is prime or not
 * @n:an input
 * Return: 1 if is prime and 0 if is not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else
		return (isprime(n, i));
}

/**
 * isprime - checks if the number is prime
 * @n: an input
 * @i: an input
 * Return: 1 or 0
 */
int isprime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n / 2)
		return (1);
	else
		return (isprime(n, i + 1));
}
