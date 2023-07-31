#include "main.h"

/**
 * _strchr - check if c is upper
 *
 * @s: is var
 *
 * @c: is var
 *
 * Return: s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
