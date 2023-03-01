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
	int dest_len; /*.*/
	int i;/*.*/

	dest_len = 0; /*get the length of dest*/
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
