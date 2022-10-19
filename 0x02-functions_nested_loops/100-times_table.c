#include "main.h"

/**
*print_times_table - prints times table starting with 0
*@n: value of the times table
*
*/

void print_times_table(int n)

{
	int num, m, p;

	if (num >= 0 && num <= 15)
{
	for (num = 0; num <= num; num++)

	{
	_putchar('0');
	for (m = 1; m <= num; m++)
	{
	_putchar(',');
	_putchar(' ');

	p = num * m;

	if (p <= 99)
		_putchar(' ');
	if (p <= 9)
		_putchar(' ');
	if (p >= 100)

	{
	_putchar((p / 100) + '0');
	_putchar((p / 10) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
}
}
