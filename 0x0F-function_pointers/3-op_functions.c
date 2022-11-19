#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add -> sum of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: ...
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub -> returns the difference
  * @a: first integer
  * @b: second integer
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul -> returns product of.
  * @a: first integer
  * @b: second integer
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div -> results of the division
  * @a: first int
  * @b: second int
  *
  * Return: ...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod -> returns remainder of.
  * @a: first int
  * @b: second int
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
