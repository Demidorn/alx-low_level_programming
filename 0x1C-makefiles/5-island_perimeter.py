#!/usr/bin/python3
""" a function that defines perimeter of an island"""


def island_perimeter(grid):
    """
    Returns perimeter of an island
    Grid representation:
            0 represents a water zone
            1 represents a land zone
    Returns: 
            perimeter of an island defined in grid
    """

    count = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                if i > 0 and grid[i - 1][j] == 1:
                        count += 1
                if j > 0 and grid[i][j - 1] == 1:
                        count += 1
                if j < width - 1 and grid[i][j + 1] == 1:
                        count += 1
                if i < height - 1 and grid[i + 1][j] == 1:
                        count += 1
    return count
