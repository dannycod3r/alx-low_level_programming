/**
 * _strcat - return a concatenation of src and dest
 * @dest: pointer to initial string
 * @src: pointer to string that will be appended to  dest
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++; /*get the length of dest*/

	src_len = 0;
	while (src[src_len] != '\0')
	{
		 /*last element of dest('\0') with first element of src*/
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	return (dest);
}
