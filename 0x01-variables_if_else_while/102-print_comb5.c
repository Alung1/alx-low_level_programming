#include <stdio.h>
/**
*main-progrtam entry point
*Return:0 success, non zero fail
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
{
	for (j = i + 1; j <= 99; j++)
{
	putchar('0' + i / 10);
	putchar('0' + i % j);

	putchar(',');

	putchar('0' + i / 10);
	putchar('0' + i % j);
	if (i == 98 && j == 99)
	break;
	putchar(',');
	putchar(',');
}
}
	putchar ('\n');
	return (0);
}
