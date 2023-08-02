#include "main.h"

/**
 * _pow_recursion - check if c is upper
 *
 * @x: is var
 *
 * @y: is var
 *
 * Return: print follwed by line
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (n * _pow_recursion(n, y - 1));
}
