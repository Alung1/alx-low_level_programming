#include "main.h"

/**
 *_strlen -> prints length of string
 *@s: string
 *Return: Length
 */

int _strlen(char *s)
{
	_str len = 0;

	while (*s++)
		len++;
	return (len);
}
