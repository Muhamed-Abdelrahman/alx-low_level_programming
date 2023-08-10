#include "main.h"

/**
 * malloc_checked - check if c is upper
 *
 * @b: is var
 *
 * Return: print follwed by line
*/

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
