#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search a given array using linear search
 * @array: pointer to the array
 * @size: size of array
 * @value: value to search
 *
 * Return: first index where the value is located else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
	}
	return (-1);
}
