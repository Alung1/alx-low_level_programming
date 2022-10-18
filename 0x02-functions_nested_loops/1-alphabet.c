#include "main.h"
/**
 *Main-prints alphabets in lowercase
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
{
	_putchar(m);
}
	_putchar('\n');
}
