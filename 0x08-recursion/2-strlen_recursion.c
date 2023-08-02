#include "main.h"

/**
 * _strlen_recursion - check if c is upper
 *
 * @s: is var
 *
 * Return: print follwed by line
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
