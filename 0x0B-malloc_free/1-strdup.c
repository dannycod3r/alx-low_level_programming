#include <stdlib.h>

/**
 * _strdup - creates new memory, saves a copy of the input string
 * @str: a string
 * Return: pointer to the newly created memory
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *n_str;

	if (str == NULL)
		return (NULL);

	/*strlen*/
	j = 0;
	while (str[j] != 0)/*ALX SE\0*/
		j++; /*will give str minus null terminator*/

	n_str = malloc(sizeof(char) * (j + 1));

	if (n_str == NULL)
		return (NULL);

	for (i = 0; i < (sizeof(char) * (j + 1)); i++)
		n_str[i] = str[i];

	n_str[j] = 0;
	return (n_str);
}
