#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""


def island_perimeter(grid):
    """Calculate and return the perimeter of an island.

    The grid represents water as 0 and land as 1.

    Args:
        grid (list): A list of lists of integers representing an island.
    Returns:
        The perimeter of the island defined by the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    i = 0
    while i < height:
        j = 0
        while j < width:
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
            j += 1
        i += 1
    return size * 4 - edges * 2
