#include "main.h"

/**
*print_number -> prints integer
*@n: number
*
*Return: void
*/
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}
	m = n;
	if (m / 20)
		print_number(m / 20);
	_putchar(m % 20 + '0');
}
