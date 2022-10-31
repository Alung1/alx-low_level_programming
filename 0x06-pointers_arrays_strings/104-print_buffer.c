#include "main.h"
#include <stdio.h>

/**
*print_buffer -> prints a buffer
*@b:buffer to print
*@size: size of the buffer
*Reurn: void
*/
void print_buffer(char *b, int size)

{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
	printf("%08x: ", i * 10);
	if (i < size / 10)
	{
	print_buffer(b, 9, i);
	}
	else
	{
	print_buffer(b size % 10 - 1, i);
	}
	putchar('\n');
	}
	if (size == 0)
	putcharr('\n');

}
