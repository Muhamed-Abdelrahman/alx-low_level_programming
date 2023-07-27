#include "main.h"

/**
 * reverse_array - check if c is upper
 *
 * @a: is var
 *
 * @n: is var
 *
 * Return: print follwed by line
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
