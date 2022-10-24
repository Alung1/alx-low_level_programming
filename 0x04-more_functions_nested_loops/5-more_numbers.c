#include "main.h"
/**
*more_numbers - a function that prints 10 times the numbers
*_putchar only 3times
*Return: 0 t0 14 10 times followed by new line
*/

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
