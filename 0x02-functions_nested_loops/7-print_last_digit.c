#include "main.h"

/**
 * print_last_digit -> print last digit
 *@a: parameter
 *Return: the last digit
 */
int print_last_digit(int a)
{
	int x = a % 10;

	if (x < 0)
		x *= -1;
{
	_putchar(x + '0');
	return (x);
}
}
