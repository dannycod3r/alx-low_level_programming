#include "main.h"

/**
 * _abs - program entry
 *
 * @x: number
 * Description:
 * Return: 0
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (x * -1);
	else
		return (0);
}
