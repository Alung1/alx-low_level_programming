#include "main.h"

/**
*_strlen_recursion - length of string
*@s:string
*Return:int
*/

int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
	m++;
	m += _strlen_recursion(s + 1);
	}
	return (m);
}
