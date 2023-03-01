/**
 * _strncat - concatenate dest and src
 * @dest: pointer to initial string
 * @src: pointer to string that will be appended to dest
 * @n: number of strings to start printing from
 * Description: appends src tot dest but it will use at most n bytes from src.
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int s;

	dest_len = 0; /*get the length of dest*/
	while (dest[dest_len] != '\0')
		dest_len++;

	src_len = 0;
	s = dest_len + n;

	while (dest_len < s)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	 }

	return (dest);
}
