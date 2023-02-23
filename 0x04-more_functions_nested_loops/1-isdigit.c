/**
 * _isdigit - check if ascii value is an integer 0..9
 * @c: ascii charactrer/value
 * Return: 0 if test pass else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
