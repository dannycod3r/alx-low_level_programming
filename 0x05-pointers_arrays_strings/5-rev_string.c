/**
 * print_rev - reverse the string in a char pointer
 * @s: character pointer
 */
void rev_string(char *s)
{
	char tmp;

	/*get the legth of the string*/
	int len = 0;
	int i;

	while (s[len] != '\0') /*get the length*/
		len++;

	len--; /*do this to ignore adding the '\0'*/
	i = 0;

	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;

		len--; /*reduce length after each iteration*/
	}
}
