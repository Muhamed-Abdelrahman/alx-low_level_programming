#include "stdio.h"

/**
 * main - check if c is upper
 *
 * @argc: is var
 *
 * @argv: is var
 *
 * Return: print follwed by line
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}
	return (0);
}
