#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @height: height of 2D array
 * @width: width of 2 D array
 * Return: integer pointer
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0;
	int **nwptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	nwptr = (int **)malloc(height * sizeof(int *));
	if (nwptr == NULL)
		return (NULL);
	for (; k < height; k++)
	{
		nwptr[k] = (int *)malloc(sizeof(int) * width);
		if (nwptr[k] == NULL)
			return (NULL);
	}
	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			nwptr[i][j] = 0;
		}
	}
	return (nwptr);
}
