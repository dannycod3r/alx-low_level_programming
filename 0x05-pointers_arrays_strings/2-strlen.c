/**
 * _strlen - return the length of a string excluding '\0'
 * @s: string pointer
 * Return: int, length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
