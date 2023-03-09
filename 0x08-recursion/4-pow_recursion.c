/**
 * _pow_recursion - find the x to power y => x^y
 * @x: base
 * @y: index
 * Return: x^y, if y < 0...-1, else 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
