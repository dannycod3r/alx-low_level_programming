/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to a string
 * @c: chareacter in search of
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')/*find the length of the str*/
		i++;


	for (j = 0; j <= i; j++) /*check if char c is in s*/
	{
		if (s[j] == c) /*if found jump from the loop*/
			break;
	}

	/*i = position, return pointer to s[i]*/
	if (s[j] != '\0')
		return (s + j);
	else
		return ('\0');
}
