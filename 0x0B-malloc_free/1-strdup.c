#include "main.h"

/**
 * _strdup - check if c is upper
 *
 * @str: is var
 *
 * Return: print follwed by line
*/

char *_strdup(char *str)
{
	char *s;
	int size = 0, i = 0;

	if (str ==  NULL)
		return (NULL);
	while (str[size])
		size++;
	s = malloc(size * sizeof(char) + 1);
	if (s == 0)
		return (NULL);
	for (; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
