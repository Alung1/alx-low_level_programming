#include "main.h"
/**
 *print_alphabet_x10 -> print 10 the times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int m;
	int i;

	for (m = 0; m < 10; m++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);

	}
	_putchar('\n');
	}
}
