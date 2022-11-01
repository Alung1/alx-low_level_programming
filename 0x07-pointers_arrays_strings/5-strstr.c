#include "main.h"

/**
*_strstr -> function that finds the first occurence
*@haystack: string
*@needle: substring
*Return: a pointer to the beginning of the located substring
*
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, s = 0;

	while (haystack[m])
	{
	while (needle[s] && (haystack[m] == needle[0]))
	{
	if (haystack[m + s] == needle[s])
		s++;
	else
	break;
	}
	if (needle[s])
	{
	m++;
	s = 0;
	}
	else
	return (haystack + m);
	}
	return (0);
}
