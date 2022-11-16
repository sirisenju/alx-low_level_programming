#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function alllocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of element of array
 * Return: points to the allocated memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int num;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	for (num = 0; num < nmemb * size; num++)
	{
		ptr[num] = 0;
	}
	return ((void *)ptr);
}
