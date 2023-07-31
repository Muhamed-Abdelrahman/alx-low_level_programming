#include "main.h"

/**
 * _strspn - check if c is upper
 *
 * @s: is var
 *
 * @accept: is var
 *
 * Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
				break;
			}
		}
		if (accept[j] != '\0')
		{
			break;
		}
	}
	return (cont);
}
