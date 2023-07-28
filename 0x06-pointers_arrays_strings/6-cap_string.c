#include "main.h"

/**
 * cap_string - check if c is upper
 *
 * @str: is var
 *
 * Return: print follwed by line
*/

char *cap_string(char *str)
{
	int i, j;
	char del[] = " \n\t,.!?\"(){}"

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (str[i] == del[j] && str[i] >= 97 && str[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
	}
}
