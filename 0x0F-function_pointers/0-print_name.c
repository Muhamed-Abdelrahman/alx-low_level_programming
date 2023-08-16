#include "function_pointers.h"

/**
 * print_name - check if c is upper
 *
 * @name: is var
 * @f: is var
 *
 * Return: print follwed by line
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
