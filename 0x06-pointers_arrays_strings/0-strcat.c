#include "main.h"
#include <stdio.h>

/**
*_strcat -> concat 2 string
*@dest:character
*@src:character
*Return:character
*/

char *_strcat(char *dest, char *src)

{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
