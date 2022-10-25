#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string
 *@s: the string
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
