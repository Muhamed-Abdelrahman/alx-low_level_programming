#include "dog.h"

/**
 * print_dog - check if c is upper
 *
 * @d: is var
 *
 * Return: print follwed by line
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("Owner: %s\n", d->age ? d->owner : "(nil)");
	}
}
