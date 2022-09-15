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
    size = 0
    for i in grid:
        if i > 100:
            return
        for x in i:
            if x > 100:
                return
            if i[x] == 1:
                size += 1
    perimeter = size * 4
    return perimeter
