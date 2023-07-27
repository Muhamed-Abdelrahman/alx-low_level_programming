#include "main.h"

/**
 * _strncpy - check if c is upper
 *
 * @dest: is var
 *
 * @src: is var
 *
 * @n: is var
 *
 * Return: print follwed by line
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a])
		a++;
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
