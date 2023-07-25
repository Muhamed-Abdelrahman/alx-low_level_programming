#include "main.h"

/**
 * print_rev - check if c is upper
 *
 * @s: is var
 *
 * Return: print follwed by line
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
}
