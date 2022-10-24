#include "main.h"

/**
*print_line - print a line
*@n: number of times the character will print
*Return: void
*/

void print_line(int n)

{
	int m;

	for (m = 0; m < n; m++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
