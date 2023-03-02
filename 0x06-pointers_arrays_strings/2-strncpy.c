/**
 * _strncpy - copy the string from src to dest
 * @dest: pointer to destination
 * @src: pointer to the source
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len; /*.*/
	int i;/*.*/

	dest_len = 0; /*get the length of dest*/
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
