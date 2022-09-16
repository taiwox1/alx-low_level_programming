#!/usr/bin/python3

""" The function returns the perimeter of an island
discriped in grid
"""


def island_perimeter(grid):

    """Grid(int) : list of interger 0 and 1
    0: water zone
    1: land zone
    size: size of the is land
    """
    row_len = len(grid)
    col_len = len(grid[0])
    size = 0
    edge = 0

    for x in range(row_len):
        for y in range(col_len):
            if grid[x][y] == 1:
                size += 1
            if (y > 0 and grid[x][y] == 1 and grid[x][y - 1] == 1):
                edge += 1
            if (x > 0 and grid[x][y] == 1 and grid[x - 1][y] == 1):
                edge += 1
    return ((size * 4) - (edge * 2))
