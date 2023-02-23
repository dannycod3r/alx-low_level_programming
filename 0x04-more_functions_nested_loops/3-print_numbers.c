/**
 * print_numbers - print 0..9
 * Return: void
 */
void print_numbers(void)
{
	int i = '0'; /*looper, and first value*/

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
