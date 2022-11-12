#include "main.h"

/**
 * malloc_checked ->causes normal process termination with a status value of 98
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);

}
