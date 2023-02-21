#include "main.h"

/**
 * _islower - program entry
 *
 * @c: ascii value
 * Description:
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
