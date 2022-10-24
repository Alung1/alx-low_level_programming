#include "main.h"
/**
 *_strlen -> prints length of string
 *@s: string
 *Return: Length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++)
		a++;
	return (a);
}
