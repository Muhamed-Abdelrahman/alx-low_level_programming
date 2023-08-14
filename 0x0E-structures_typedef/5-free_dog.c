#include "dog.h"

/**
 * free_dog - check if c is upper
 *
 * @d: is var
 *
 * Return: print follwed by line
*/

void free_dog(dog_t *d)
{
	if (s)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
