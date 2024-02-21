#!/usr/bin/python3
"""
Module to find the perimeter of an island
in a given grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    - grid: list of list of integers where 0 represents water zone
      and 1 represents land zone. The grid cells are square, with
      side length 1 and are connected horizontally/vertically.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
