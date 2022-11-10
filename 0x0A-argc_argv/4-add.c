#include <stdio.h>
#include <stdlib.h>

/**
 * main -> a program that adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m, s, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (m = 1; argv[m]; i++)
	{
		s = strtol(argv[m], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += s;
		}
	}
	printf("%d\n", sum);

	return (0);
}
