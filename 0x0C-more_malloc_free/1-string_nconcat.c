#include "main.h"

/**
 * string_nconcat - check if c is upper
 *
 * @s1: is var
 *
 * @s2: is var
 *
 * @n: is var
 *
 * Return: print follwed by line
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int cont2, cont, i, j;

	cont = 0;
	cont2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[cont])
		cont++;
	while (s2[cont2])
		cont2++;
	m = malloc(cont + n + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; i < cont; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
