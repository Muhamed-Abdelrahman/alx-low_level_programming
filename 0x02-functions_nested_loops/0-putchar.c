#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 0-putchar.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(str[ch]);
	putchar('\n');

	return (0);
}
