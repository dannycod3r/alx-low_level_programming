unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int match;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])

				return (match);
			j++;
		}
		i++;
	}

	return (match);
}
