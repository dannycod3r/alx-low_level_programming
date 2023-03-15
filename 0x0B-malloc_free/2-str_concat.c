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
	unsigned int i, j = 0, t_size;
	char *concat;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	t_size = get_size(s1) + get_size(s2);
	concat = malloc(sizeof(char) * t_size);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
}


/**
 * get_size - get the size of a null terminated string
 * @s: string
 * Return: size minus the null termination
 */
int get_size(char *s)
{
	unsigned int i;

	i = 0;
	if (s == NULL)
		return (0);

	while (s[i] != 0)
		i++;

	return (i);
}
