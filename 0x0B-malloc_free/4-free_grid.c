#include"main.h"

/**
 * free_grid - A function that frees a 2 dimensional
 *		grid previously created by your alloc_grid function
 *
 * @grid: grid of the memory
 * @height: int
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
