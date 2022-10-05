#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - 2 dimensional grid previously created by alloc_grid function.
 * @grid: 2 dim. array to free
 * @height: input height (size)
 * Return: Free grid
 */

void free_grid(int **grid, int height)
{
	int kenny;
	/* if grid is not equal to null and height is also not equal to 0*/
	if (grid != NULL || height != 0)
	{
		/*for every kenny that is 0 and less than height increase height*/
		for (kenny = 0; kenny < height; kenny++)
		{
			/*free grid[kenny]*/
			free(grid[kenny]);
		}
		/*free grid*/
		free(grid);
	}
}
