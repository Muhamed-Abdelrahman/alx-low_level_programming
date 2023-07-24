#include "main.h"

/**
 * _puts - check if c is upper
 *
 * @str: is var
 *
 * Return: print follwed by line
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
