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
	int a = 0, b = 0;

	while (dest[a])
		a++;
	for (b; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
