#include "main.h"

/**
 * _memcpy - check if c is upper
 *
 * @dest: is var
 *
 * @src: is var
 *
 * @n: is var
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
