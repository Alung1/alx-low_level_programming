#include "main.h"

/**
 *_strlen -> prints length of string
 *@s: string
 *Return: Length
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
