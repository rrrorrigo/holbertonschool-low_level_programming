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
                if j == 0:
                    returnvalue += 1
                elif grid[i][j - 1] == 0:
                    returnvalue += 1
                if i == 0:
                    returnvalue += 1
                elif grid[i - 1][j] == 0:
                    returnvalue += 1
                if j == len(grid[i]) - 1:
                    returnvalue += 1
                elif grid[i][j + 1] == 0:
                    returnvalue += 1
                if i == len(grid) - 1:
                    returnvalue += 1
                elif grid[i + 1][j] == 0:
                    returnvalue += 1
    return returnvalue

grid = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))
