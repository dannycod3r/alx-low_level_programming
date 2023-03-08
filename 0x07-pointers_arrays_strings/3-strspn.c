/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 *           consist only of bytes from accept
 * @s: pointer to string
 * @accept: pointer to string to be user for reference
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int match;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		match = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (match);
		i++;
	}

	return (match);
}
