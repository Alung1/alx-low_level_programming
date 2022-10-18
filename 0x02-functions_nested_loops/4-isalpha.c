#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to check on
 * Retun: Returns 1 if c is a letter, lowercase or uppercase
 * Return: Returns 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
