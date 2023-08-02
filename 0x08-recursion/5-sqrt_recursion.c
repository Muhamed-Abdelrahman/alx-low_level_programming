#include "main.h"

/**
 * _sqrt_recursion - check if c is upper
 *
 * @n: is var
 *
 * @val: is var
 *
 * Return: print follwed by line
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

#include "main.h"

/**
 * square - check if c is upper
 *
 * @n: is var
 *
 * @val: is var
 *
 * Return: print follwed by line
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
