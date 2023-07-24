#include "main.h"

/**
 * swap_int - check if c is upper
 *
 * @a: is var
 *
 * @b: is var
 *
 * Return: a = b , b = a
*/

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
