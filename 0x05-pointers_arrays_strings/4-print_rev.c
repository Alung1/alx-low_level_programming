#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int m = 0

	while (s[m] != '\0')
		m++;
	for (m = m - 1; m >= 0; m--)
	{
	_putchar(s[m]);
	}
	_putchar('\n');
}
