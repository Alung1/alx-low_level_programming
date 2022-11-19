#include "function_pointers.h"

/**
  * int_index -> returns index of first element
  * @array: array
  * @size: number of elements
  * @cmp: pointer to the function
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}