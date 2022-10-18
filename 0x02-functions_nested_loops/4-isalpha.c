#include "main.h"

/**
 *_isalpha - checks for alphabetical letters
 *@c: checking characters
 *Retun: returns 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); |
}
