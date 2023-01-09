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
	int i , j;
	int **nwptr[];

	if (width <= 0 || height <= 0)
		return (NULL);
	nwptr = malloc((width * height) * sizeof(int));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			nwptr[i][j] = 0;
		}
	}
	return (nwptr);
}
