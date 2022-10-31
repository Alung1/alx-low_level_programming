#include "main.h"

/**
*_strchr -> locates a character
*@c: occurence of the chara
*@s:string
*Return: a pointer to the first
*
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	s++;
	else
		return (s);
	}
	if (c == '\0')
	return (s);

	return (NULL);
}
