#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for the rows */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* allocate memory for the columns of each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* free previously allocated memory if allocation fails */
			while (i >= 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		/* initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
