#include "main.h"

/**
*cap_string - capitalizes all words in a string
*@s:string
*Return:address of s
*/
char *cap_string(char *s)
{
	int m = 0, x;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + m))
	{
		if (*(s + m) >= 'a' && *(s + m) <= 'z')
		{
			if (m == 0)
			*(s + m) -= 'a' - 'A';
		else
		{
		for (x = 0; x <= 12; x++)
		{
		if (a[x] == *(s + m - 1))
		*(s + m) -= 'a' - 'A';
		}
		}
		}
		m++;
	}
	return (s);
}
