#include "main.h"

/**
 * _strcat - check if c is upper
 *
 * @dest: is var
 *
 * @src: is var
 *
 * Return: print follwed by line
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	dest[a++] = '\0';
	return (dest);
}
