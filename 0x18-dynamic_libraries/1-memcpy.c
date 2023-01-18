#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		*(dest + num) = *(src + num);
	}
	return (dest);
}
