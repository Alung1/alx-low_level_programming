#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, k, l;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		array[k] = (int *)malloc(sizeof(int) * width);
		if (array[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(array[k]);
			free(array);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			array[k][l] = 0;

	return (array);
}
