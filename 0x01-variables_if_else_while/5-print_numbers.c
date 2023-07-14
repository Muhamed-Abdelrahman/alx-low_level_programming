#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 5-print_numbers.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
