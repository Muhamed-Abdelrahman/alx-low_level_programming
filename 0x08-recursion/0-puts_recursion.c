#include "main.h"

/**
 * _puts_recursion - check if c is upper
 *
 * @s: is var
 *
 * Return: print follwed by line
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
