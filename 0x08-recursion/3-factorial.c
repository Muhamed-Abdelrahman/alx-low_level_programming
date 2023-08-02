#include "main.h"

/**
 * factorial - check if c is upper
 *
 * @n: is var
 *
 * Return: print follwed by line
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
