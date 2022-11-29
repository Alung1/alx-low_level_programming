#include <unistd.h>

/**
*_putchar -writes the character c to output
*
*@c: The character to print 
*
*Return: 1 when successful, and -1 when error
*
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
