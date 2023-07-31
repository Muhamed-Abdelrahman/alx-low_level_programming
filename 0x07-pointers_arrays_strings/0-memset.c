#include "main.h"

/**
 * _memset - check if c is upper
 *
 * @s: is var
 *
 * @b: is var
 *
 * @n: is var
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
