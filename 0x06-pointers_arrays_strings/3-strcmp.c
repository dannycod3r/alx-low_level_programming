/**
 * _strcmp - compare two strings
 * @s1: pointer to lhs string, to be compared to
 * @s2: pointer to rhs string, to be compared with
 * Return: 0 if s1=s2, > 0 if s1 is bigger, < 0 if s1 is less
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0); /* strings are identical*/

	else
		return (*s1 - *s2);
}
