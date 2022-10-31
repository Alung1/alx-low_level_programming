#include "main.h"

/**
*_memcpy -> function that copies
*@n: function
*@src: bytes from memory area
*@dest: to memory area
*Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
	dest[m] = src[m];
	m++;
	}
	return (dest);
}
