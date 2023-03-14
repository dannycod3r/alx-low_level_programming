#include <stdlib.h>

/**
 * _strdup - creates new memory, saves a copy of the input string
 * @str: a string
 * Return: pointer to the newly created memory
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *n_str;

	/*size of the string*/
	n_str = malloc(sizeof(char) * 8);

	if (n_str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(char) * 8; i++)
		n_str[i] = str[i];

	return (n_str);
	free(n_str);
}
