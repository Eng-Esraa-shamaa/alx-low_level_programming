#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *free_grid - frees two dimensional array
 *@grid: first parameter
 *@height: second param
 *Return : zero when success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
