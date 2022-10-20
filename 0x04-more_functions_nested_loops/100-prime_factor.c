#include <stdlib.h>

/**
*main -- prints largest prime factor of 612852475143
*Return: always 0
*
*/

int main(void)
{
	unsigned long int m, n = 612852475143;

	for (m = 3; m < 782849; m = m + 2)
	{
		while ((n % m == 0) && (n != m))
			n = n / m;
	}
	printf("%lu\n", n);
	return (0);
}
