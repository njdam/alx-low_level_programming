#!/usr/bin/python3
"""A python file that bear a function that returns island described in grid
"""


def island_perimeter(grid):
    """A function island_perimeter() that returns the parameter of island
    described in grid.

    Args:
        grid: is a list of list of integers.
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            Grid is completely surrounded by water,
                and there is one island (or nothing).
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for j in range(height):
        for i in range(width):
            # If in a list there is an integer 1
            if grid[j][i] == 1:
                size += 1
                # If above 1 there is other 1 connected to it (vertical)
                if i > 0 and grid[j][i - 1] == 1:
                    edges += 1
                # if before 1 there is other 1 connected to it (horizontal)
                if j > 0 and grid[j - 1][i] == 1:
                    edges += 1

    # Calculation of all squared parameter - sides where connected.
    parameter = (size * 4) - (edges * 2)

    return (parameter)
