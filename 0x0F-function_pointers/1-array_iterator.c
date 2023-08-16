#include "function_pointers.h"

/**
 * array_iterator - check if c is upper
 *
 * @array: is var
 * @size: is var
 * @action: is var
 *
 * Return: print follwed by line
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
