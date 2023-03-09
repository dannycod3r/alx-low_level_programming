/**
 * _strlen_recursion - find length of string recursively
 * @s: string to find its length
 * Return: number of chars in string minus null termination
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
