#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: column of the 2d array
 * @height: row of 2d array
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **iid_arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	iid_arr = malloc(sizeof(int *) * height);

	if (iid_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		iid_arr[i] = malloc(sizeof(int) * width);
		if (iid_arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(iid_arr);

			free(iid_arr);
			return (NULL);
		}
	} /*endfor*/
	for (i = 0; j < width; j++)
		iid_arr[i][j] = 0;

	return (iid_arr);
}
