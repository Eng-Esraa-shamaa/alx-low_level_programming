#!/usr/bin/python3
"""
Returns the perimeter of the island
"""


def island_perimeter(grid):
    """
    island perimeter
    """
    height = len(grid)
    width = len(grid[0])
    island_edges = 0
    size = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    island_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    island_edges += 1
    return ((size * 4) - (island_edges * 2))
