#include "main.h"

/**
*_strncat -> concatenate two strings
*@src: source strings
*@dest: destination of the string
*@n: length of int
*Return: pointer to the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int s, m;

	for (s = 0; dest[s] != '\0'; s++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[s + m] = src[m];
	}
	dest[s + m] = '\0';
	return (dest);
}
