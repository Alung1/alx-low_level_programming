#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);

	return (0);
}
