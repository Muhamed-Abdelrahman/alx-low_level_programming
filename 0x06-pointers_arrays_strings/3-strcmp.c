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
	int equ = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equ = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equ);
}
