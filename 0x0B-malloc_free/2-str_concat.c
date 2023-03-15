#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: add this to first string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, i, j = 0, t_size;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;

	t_size = a + b;
	/*plus 1 for the null terminator*/
	concat = malloc(sizeof(char) * (t_size + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
}
