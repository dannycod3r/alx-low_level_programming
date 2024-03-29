#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to the new memory address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int a = 0, b = 0, i, j = 0, s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	s = a + n;
	if (n >= b)
		s = a + b;
	nstr = malloc(sizeof(nstr) * (s + 1));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		nstr[j++] = s1[i];

	if (n >= b)
	{
		for (i = 0; s2[i]; i++)
			nstr[j++] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			nstr[j++] = s2[i];
	}
	nstr[j] = '\0';

	return (nstr);
}
