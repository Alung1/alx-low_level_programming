#include "main.h"
#include <stddef.h>

/**
*_strpbrk -> function searches string
*@s: string
*@accept:matches one of the byte or @NULL if no byte
*Return: a pointer to the byte
*
*/
char *_strpbrk(char *s, char *accept)

{
	int m;

	while (*s)
	{
	for (m = 0; accept[m]; m++)
	{
	if (*s == accept[m])
	return (s);
	}
	s++;
	}
	return (NULL);
}
