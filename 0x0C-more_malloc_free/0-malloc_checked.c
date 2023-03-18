#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: number of bytes to allocate
 * Return: memory addr of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_mem;

	ptr_mem = malloc(b);
	if (ptr_mem == NULL)
		exit(98);

	return (ptr_mem);
}
