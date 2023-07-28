#include "main.h"

/**
 * leet - check if c is upper
 *
 * @c: is var
 *
 * Return: print follwed by line
*/

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = val[i] + 48;
			}
		}
		c++;
	}
	return (cp);
}
