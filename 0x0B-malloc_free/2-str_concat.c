#include "main.h"

/**
 * str_concat - check if c is upper
 *
 * @s1: is var
 *
 * @s2: is var
 *
 * Return: print follwed by line
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, size = 0, size2 = 0;

	while (s1[size])
		size++;
	while (s2[size2])
		size2++;
	size2 += size;
	s = malloc(size * sizeof(char) + 1);
	if (s == 0)
		return (NULL);
	for (i; i < size; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; size < size2; size++, i++)
	{
		s[size] = s2[i];
	}
	return (s);
}
