#include "main.h"

/**
 * _strcpy - check if c is upper
 *
 * @dest: is var
 *
 * @src: is var
 *
 * Return: print follwed by line
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, a;

	while (src[i])
		i++;
	i++;
	for (a = 0; a < i; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
