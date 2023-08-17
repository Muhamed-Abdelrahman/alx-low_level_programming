#include "variadic_functions.h"

/**
 * sum_them_all - check if c is upper
 *
 * @n: is var
 *
 * Return: print follwed by line
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	va_list(ptr);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
