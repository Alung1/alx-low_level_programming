#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-program entry point
*Return:0 if successful and non zero if fail
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
{
	for (j = i + 1; j < 100; j++)
{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');

	putchar(' ');

	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	if (i == 98 && j == 99)
	break;
	putchar(',');
	putchar(' ');
}
}
	putchar ('\n');
	return (0);
}
