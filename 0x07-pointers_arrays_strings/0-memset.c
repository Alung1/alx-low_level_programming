#include "main.h"

/**
*_memset -> function
*@n: bytes of the memory
*@s: with the constant byte
*@b: memory area
*Return: a ppointer
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
	s[m] = b;
	m++;
	}
	return (s);
}
