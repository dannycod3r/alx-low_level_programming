#include "main.h"

/**
 * _isalpha - program entry
 *
 * @c: ascii value
 * Description:
 * Return: 0
 */
int _isalpha(int c)
{
	/*test if lower or upper*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
