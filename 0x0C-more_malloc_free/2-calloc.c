#include "main.h"

/**
 * _calloc - check if c is upper
 *
 * @nmemb: is var
 *
 * @size: is var
 *
 * Return: print follwed by line
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		m[i] = '0';
	return (m);
}
