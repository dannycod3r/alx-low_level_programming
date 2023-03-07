/**
 * _memset - fill a number of memory location with a constant byte.
 * @s: string pointer
 * @b: constant byte
 * @n: number of memory to fill
 * Return: s pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /*iterator*/

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
