#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - copies memory location
 * @dest: destination
 * @src: source
 * @n: size of memory
 * Return: ptr or null
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		dest[num] = src[num];
	return (dest);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the meomory previously allocated
 * @old_size: size, in bytes of old memory
 * @new_size: new size in bytes of the new memory block
 * Return: ptr or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);

		free(ptr);
		return (ptr2);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	_memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
}
