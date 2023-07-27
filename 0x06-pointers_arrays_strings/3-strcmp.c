#include "main.h"

/**
 * _strcmp - check if c is upper
 *
 * @s1: is var
 *
 * @s2: is var
 *
 * Return: print follwed by line
*/

int _strcmp(char *s1, char *s2)
{
	int a, b, indx, i;

	a = 0;
	b = 0;
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (a >= b)
		indx = a;
	else
		indx = b;
	for (i = 0; i < indx; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		else
			return (0);
	}
}
