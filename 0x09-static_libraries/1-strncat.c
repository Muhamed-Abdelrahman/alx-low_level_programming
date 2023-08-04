#include "main.h"

/**
 * _strncat - check if c is upper
 *
 * @dest: is var
 *
 * @src: is var
 *
 *@n: is var
 *
 * Return: print follwed by line
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	c = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[c])
		c++;
	if (n > c)
		n = c;
	for (b = 0; b <= n - 1; b++)
	{
		dest[a++] = src[b];
	}
	dest[a++] = '\0';
	return (dest);
}
