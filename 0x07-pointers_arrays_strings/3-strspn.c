#include "main.h"

/**
*_strspn -> a function that gets length
*@s:initial segment
*@accept: consist of only byte
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int m = 0, i, c;

	for (m = 0; s[m] != '\0'; m++)
	{
	if (s[m] != 32)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (s[m] == accept[i])
	c++;
	}
	}
	else
	return (c);
	}
	return (c);

}
