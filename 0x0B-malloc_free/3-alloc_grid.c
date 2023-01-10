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
	int i = 0, j = 0;
	int **nwptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	nwptr = (int **)malloc(height * sizeof(int *));
	if (nwptr == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		nwptr[i] = (int *)malloc(sizeof(int) * width);
		if (nwptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			nwptr[i][j] = 0;
		}
	}
	return (nwptr);
}
