#include "stdlib.h"
#include "dog.h"

/**
 * _strcpy - check if c is upper
 *
 * @src: is var
 *
 * @dest: is var
 *
 * Return: print follwed by line
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a dog struct
 * @name: a dog's name
 * @age: a a dog's age
 * @owner: a dog's owner
 *
 * Return: print follwed by line
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int s1 = 0, s2 = 0;
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == 0)
		return (NULL);
	while (name[s1])
		s1++;
	while (owner[s2])
		s2++;
	dog->name = malloc(s1 + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(s2 + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
