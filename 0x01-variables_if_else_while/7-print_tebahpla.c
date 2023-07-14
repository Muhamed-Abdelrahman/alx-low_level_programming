#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 6-print_numberz.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i = 'z';

	for (; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
