/**
 * swap_int - swap the content of a and b
 * @a: param 1
 * @b: param 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a; /*put the value of *a to tmp*/
	*a = *b; /*put the value of *b to *a*/
	*b = tmp; /*put the value of tmp to *b*/
}
