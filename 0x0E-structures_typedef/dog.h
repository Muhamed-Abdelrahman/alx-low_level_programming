#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: a dog's name
 * @age: a a dog's age
 * @owner: a dog's owner
 *
 * Description: struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
