#!/usr/bin/python3
'''
Functions: island_perimeter
'''


def island_perimeter(grid):
    ''' returns the perimeter of the island described in grid '''
    total_p = 0

    rows = len(grid)
    if rows:
        cols = len(grid[0])
    else:
        cols = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    total_p += 1
                if (i + 1) == rows or grid[i + 1][j] == 0:
                    total_p += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    total_p += 1
                if (j + 1) == cols or grid[i][j + 1] == 0:
                    total_p += 1

    return total_p
