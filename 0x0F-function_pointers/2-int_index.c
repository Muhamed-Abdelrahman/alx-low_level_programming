#include "function_pointers.h"

/**
 * int_index - check if c is upper
 *
 * @array: is var
 * @size: is var
 * @cmp: is var
 *
 * Return: print follwed by line
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else if (size <= 0)
		return (-1);
}
