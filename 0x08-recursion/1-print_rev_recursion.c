#include "main.h"

/**
 * _print_rev_recursion - check if c is upper
 *
 * @s: is var
 *
 * Return: print follwed by line
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
