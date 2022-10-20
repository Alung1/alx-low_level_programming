#include <stdio.h>
#include "main.h"

/**
*main -entry point
*Description: prints Fizz for multiples of 3
*Buzz for 5, and FizzBuzz for both
*Return: Always 0
*/

int main(void)

{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 15 == 0)
			printf("FizzBuzz");
		else if (m % 3 == 0)
			printf("Fizz");
		else if (m % 5 == 0)
			printf("Buzz");
		else
			printf("%m");
		if (m < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
