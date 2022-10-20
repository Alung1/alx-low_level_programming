#include "main.h"
#include <stdio.h>

/**
*print_numbers - a fucntion that prints numbers from 0 to 9
*@m: interger
*Return: 0-9 and followed by a newline
*/

void print_numbers(int m)

{
	int m;

	for (m = '0'; m <= '9'; m++)

	{
	_putchar(m + '0');

	}
	_putchar('\n');
}
