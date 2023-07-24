#include "main.h"

/**
 * _strlen - check if c is upper
 *
 * @s: is var
 *
 * Return: size
*/

int _strlen(char *s)
{
	int cont = 0;

	for ( ; *s != '\0'; s++)
		++cont;
	return (cont);
}
