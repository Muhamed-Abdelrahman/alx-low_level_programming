#include "main.h"

/**
 * is_prime_number - check if c is upper
 *
 * @n: is var
 *
 * @i: is var
 *
 * Return: print follwed by line
*/

int ch(int n, int i);
int is_prime_number(int n)
{
	return (ch(n, 2));
}

#include "main.h"

/**
 * ch - check if c is upper
 *
 * @n: is var
 *
 * @i: is var
 *
 * Return: print follwed by line
*/

int ch(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (ch(n, i + 1));
}
