#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m, s;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	s = atoi(argv[2]);
	printf("%d\n", m * s);

	return (0);
}
