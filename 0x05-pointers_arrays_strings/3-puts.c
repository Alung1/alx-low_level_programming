#include "main.h"

/**
 *_puts - prints a string
 *@str: the string
 *
 */
void _puts(char s)
{

	while (s)
	{
		_putchar(s);
	}
	_putchar('\n');
}
