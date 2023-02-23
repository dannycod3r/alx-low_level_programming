/**
 * _isupper - check if ascii char is a uppercase letter
 * @c: number to test
 * Return: 1 if test is true else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
