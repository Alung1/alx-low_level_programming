#include <stdio.h>
#include <unistd.h>
/**
 *main- would print exacly the required output
 *
 *Return: By default returns zero if no error,
 *otherwise returns non-zero value.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
