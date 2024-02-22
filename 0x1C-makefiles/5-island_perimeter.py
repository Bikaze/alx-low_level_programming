#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """grid: 2x2 interger nested list"""

    perimeter = 0
    for j in range(len(grid)):
        for i in range(len(grid[0])):
            if grid[j][i] == 1:
                if i - 1 == -1 or grid[j][i-1] == 0:
                    perimeter += 1
                if i + 1 == len(grid[0]) or grid[j][i+1] == 0:
                    perimeter += 1
                if j - 1 == -1 or grid[j-1][i] == 0:
                    perimeter += 1
                if j + 1 == len(grid) or grid[j+1][i] == 0:
                    perimeter += 1

    return perimeter
