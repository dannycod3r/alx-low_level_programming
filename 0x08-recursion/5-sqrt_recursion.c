#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number the natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @n: number to calculate the square root
 * @i: iterater
 * Return: the natural square root else -1
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
