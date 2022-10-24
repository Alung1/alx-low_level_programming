#include "main.h"

/**
 *swap_int -> swapping two integers
 *@a: 1st intger to swap
 *@b: 2nd integer to swap
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
