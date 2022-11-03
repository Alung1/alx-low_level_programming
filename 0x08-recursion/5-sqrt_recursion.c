#include "main.h"

/**
*_sqrt_recursion -> returns natural sqrt root
*@n: integer
*Return:natural sqrt root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (check(1, n));
}
