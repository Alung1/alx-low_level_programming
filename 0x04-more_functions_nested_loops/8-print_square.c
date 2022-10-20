#include "main.h"

/**
*print_square - prints a square of size
*@size: size of a square
*Return: void
*/

void print_square(int size)

{
	int m, s;

	if (size <= 0)

	_putchar('\n');

	for (m = 0; m < size; m++)

	{
	for (s = 0; s < (size); s++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
