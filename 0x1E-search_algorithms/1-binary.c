#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - search a given array using binary search
 * @array: pointer to the array
 * @size: size of array
 * @value: number to be searched
 *
 * Return: the index where value is located or -1 if otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = floor((left + right) / 2);
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i == right)
				printf("\n");
			else
				printf(", ");
		}

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
