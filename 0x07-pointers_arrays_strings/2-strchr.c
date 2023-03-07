/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to a string
 * @c: chareacter in search of
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c) /*check if char c is in s*/
		i++;


	/*i = position, return pointer to s[i]*/
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
