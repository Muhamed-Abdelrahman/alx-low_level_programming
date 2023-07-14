#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 2-print_alphabet.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i = 97;

	for (; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
