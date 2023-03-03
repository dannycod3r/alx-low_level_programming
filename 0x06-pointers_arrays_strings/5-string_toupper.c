/**
 * string_toupper - change string to uppercase, letter by letter
 * @s: ponter to a string input
 * Return: pointer to capitalized string.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		/*check if element is a lower case*/
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32; /*-32 to change to caps, ref ascii*/

		i++;
	}

	return (s);
}
