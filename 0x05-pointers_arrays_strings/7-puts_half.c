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
	int i = 0, a;

	while (str[i])
		i++;
	for (a = i / 2; *str != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
