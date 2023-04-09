#include "main.h"
/**
 * binary_to_uint - convert a binary string to unsigned decimal
 * @b: binary string
 * Return: decimal of binary string
 */
unsigned int binary_to_uint(const char *b)
{
	char c;
	int i = 0;
	int len = _strlen(b);
	unsigned int dec = 0;

	for (; i < len; i++)
	{
		/*
		 * do this to
		 * start counting from the back but ignoring '\0'
		 */
		c = b[len - i - 1];
		/*
		 * check if c is 1 then do 2^i == 1<<i == pow(2,i)
		 * dont do the check ('1' || '0')
		 * else dec will add count for 0 as and actual number...?
		 */
		if (c == '1')
			dec += 1 << i;
		else if (c != '0')
			return (0);
	}

	return (dec);
}

/**
 * _strlen - get string length
 * @s: string
 * Return: the number of characters exclude the null terminator
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
