#include "main.h"
/**
*leet -> encodes a string into 1337
*@s:string to encode
*Return: address of s
*/

char *leet(char *s)
{
	int i, v;
	char a[] = "aAeEoOtTlL";
	char a[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (a[v] == s[i])
			s[i] = b[v];
		}
	}
	return (s);
}
