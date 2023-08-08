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
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
