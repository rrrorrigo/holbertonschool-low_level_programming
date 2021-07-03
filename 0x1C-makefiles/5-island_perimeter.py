#!/usr/bin/python3
"""
cration of function that return the perimeter of island
"""


def island_perimeter(grid):
    """ function that return the perimeter of island 'grid'"""
    returnvalue = 0
    for i in range(len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j]:
                if j == 0 or grid[i][j - 1] == 0:
                    returnvalue += 1
                if i == 0 or grid[i - 1][j] == 0:
                    returnvalue += 1
                if grid[i + 1][j] == 0 or i == len(grid) - 1:
                    returnvalue += 1
                if grid[i][j + 1] == 0 or j == len(grid[i]) - 1:
                    returnvalue += 1
    return returnvalue
