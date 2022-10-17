#include <stdio.h>
/**
*main-progrtam entry point
*Return:0 if successful and non zero if fail
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
{
	for (j = i + 1; j <= 99; j++)
{
	putchar('0' + i / 10);
	putchar('0' + i % 10);

	putchar(',');

	putchar('0' + i / 10);
	putchar('0' + i % 10);
	if (i == 98 && j == 99)
	break;
	putchar(',');
	putchar(',');
}
}
	putchar ('\n');
	return (0);
}
