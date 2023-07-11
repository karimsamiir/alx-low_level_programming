#include"main.h"

/**
 * **alloc_grid - A function that returns a pointer to a 2
 *			dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **cap, i, j;

	cap = malloc(sizeof(*cap) * height);

	if (width <= 0 || height <= || cap == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			cap[i] = malloc(sizeof(**cap) * width);
			if (cap[i] == 0)
			{
				while (i--)
					free(cap[i]);
				free(cap);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				cap[i][j] = 0;
		}
	}

	return (cap);
}
