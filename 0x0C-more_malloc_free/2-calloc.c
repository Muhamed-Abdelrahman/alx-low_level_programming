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
	void *ptr;
	char *byte_ptr = (char *)ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (unsigned int i = 0; i < nmemb * size; i++)
		{
			byte_ptr[i] = 0;
		}
	}

	return (ptr);
}
