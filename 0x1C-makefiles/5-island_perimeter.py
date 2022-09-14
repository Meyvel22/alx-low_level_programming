#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of the island.
    In the grid, 1 represents land zone and 0 represets water zone.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    w = len(grid[0])
    l = len(grid)
    edges = 0
    perimeter = 0

    for x in range(l):
        for y in range(w):
            if grid[x][y] == 1:
                perimeter += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
