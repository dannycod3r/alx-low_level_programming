#!/usr/bin/python3
"""ALX Technical interview preparation
"""


def island_perimeter(grid):
    """A function that returns the perimeter of the island described in grid.

    Arg:
	grid: is a list of list of integers
    """
    # if is note list
    if isinstance(grid, list):
        return 1

    # if empty or no row
    if not grid or not grid[0]:
        return 0


if __name__ == "__main__":

    grid = [
   	    [0, 0, 0, 0, 0, 0],
	    [0, 1, 0, 0, 0, 0],
	    [0, 1, 0, 0, 0, 0],
	    [0, 1, 1, 1, 0, 0],
	    [0, 0, 0, 0, 0, 0]
	    ]
    print(type(grid).__name__)
    print(island_perimeter(grid))
