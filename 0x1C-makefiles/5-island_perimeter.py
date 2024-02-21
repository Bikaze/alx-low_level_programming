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
				if i != 0 and grid[j][i-1] == 0:
					perimeter += 1
				if i != len(grid[0]) - 1 and grid[j][i+1] == 0:
					perimeter += 1
				if j != 0 and grid[j-1][i] == 0:
					perimeter += 1
				if j != len(grid) - 1 and grid[j+1][i] == 0:
					perimeter += 1
	return perimeter
