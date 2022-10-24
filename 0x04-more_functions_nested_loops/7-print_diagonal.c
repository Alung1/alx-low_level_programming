#include "main.h"

/**
*print_diagonal - printing diagonal lines
*@n: variable
*Return:void
*/

void print_diagonal(int n)

{
	int m, s;

	if (n <= 0)

		_putchar('\n');

	for (m = 0; m < n; m++)
	{

	for (s = 0; s < m; s++)
	{
	_putchar(' ');

	}

	_putchar('\\');
	_putchar('\n');
	}
}
