#include "main.h"

/**
 * get_endianness - check the endianness of a system
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 0x12345678;
	unsigned char *p = (unsigned char *)&n;

	/* if most significant byte(not bit) is 0x12 - big endian */
	if (p[0] == 0x12 && p[1] == 0x34 && p[2] == 0x56 && p[3] == 0x78)
	{
		return (0);
	}
	else if (p[0] == 0x78 && p[1] == 0x56 && p[2] == 0x34 && p[3] == 0x12)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
