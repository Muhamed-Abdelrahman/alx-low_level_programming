#include "main.h"

/**
 * _create_array - check if c is upper
 *
 * @size: is var
 *
 * @c: is var
 *
 * Return: print follwed by line
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *ptr = malloc(sizeof(char) * size);
	unsigned int i;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
