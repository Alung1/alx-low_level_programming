#include "main.h"

/**
*_strncpy -> copies aa string
*@src: source of the string
*@dest: string destination
*@n: length of int
*Return: pointer to resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m;
	
	for (m = 0; m < n && *(src + m); m++)
	{
		*(dest + m) = *(src + m);
	}
	for (; m < n; m++)
	{
	*(dest + m) = '\0';
	}
	return (dest);
}
