/**
 * factorial - find the factorial of n recursivly
 * @n: number
 * Return: factorial of n, 1 if n = 0,1, -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
