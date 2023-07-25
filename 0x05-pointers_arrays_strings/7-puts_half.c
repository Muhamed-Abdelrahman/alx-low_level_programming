#include "main.h"

/**
 * puts_half - check if c is upper
 *
 * @str: is var
 *
 * Return: print follwed by line
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		;
	i++;
	for (i /= 2; *str != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
