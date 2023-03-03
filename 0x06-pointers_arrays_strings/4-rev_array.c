/**
 * reverse_array - reverse the arrangement of a given array.
 * @a: pointer to an array
 * @n: is the number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		i++;
		n--;
	}
}
