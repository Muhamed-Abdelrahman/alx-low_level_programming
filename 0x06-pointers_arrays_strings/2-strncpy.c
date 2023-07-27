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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
