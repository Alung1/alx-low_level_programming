#include "main.h"
/**
*rot13 -> encodes a string
*@s: string
*Return: address of s
*/

char *rot13(char *s)
{
	int m, x;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(s + m); m++)
	{
		for (x = 0; x < 52; x++)
		{
		if (a[x] == *(s + m))
		{
		*(s + m) = b[x];
		break;
		}
		}
	}
	return (s);
}
