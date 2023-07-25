#include "main.h"

/**
 * rev_string - check if c is upper
 *
 * @s: is var
 *
 * Return: print follwed by line
*/

void rev_string(char *s)
{
	int i = 0, l;
	char temp;

	while (s[i])
		i++;
for (l = 0;  l < i / 2; l++)
{
	temp = s[l];
	s[l] = s[i - 1 - l];
	s[i - 1 - l] = temp;
}
}
