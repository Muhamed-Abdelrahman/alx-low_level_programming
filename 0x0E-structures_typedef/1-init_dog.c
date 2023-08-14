#include "dog.h"

/**
 * init_dog - check if c is upper
 *
 * @d: is var
 * @name: a dog's name
 * @age: a a dog's age
 * @owner: a dog's owner
 *
 * Return: print follwed by line
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).ege = ege;
		(*d).owner = owner;
	}
}
