#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **kenny;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	kenny = malloc(height * sizeof(int *));
	/* if kenny is equal to Null return Null*/
	if (kenny == NULL)
		return (NULL);
	/*for every i thats 0 and less than height increase i*/
	for (i = 0; i < height; i++)
	{
		/*size of kenny[i] using malloc*/
		kenny[i] = malloc(width * sizeof(int));
		/*check if kenny[i] is equal to Null*/
		if (kenny[i] == NULL)
		{
			while (i >= 0)
				/*free kenny[i]*/
				free(kenny[i--]);
			/* Free kenny*/
			free(kenny);
			return (NULL);
		}
			/*for every a that is less than width increase a*/
			for (a = 0; a < width; a++)
				kenny[i][a] = 0;
	}
	return (kenny);
}
