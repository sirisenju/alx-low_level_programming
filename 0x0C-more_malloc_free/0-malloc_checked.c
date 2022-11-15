#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the meomry to allocate
 * Return: returns a pointer to the meomory
 * 98 if insufficient memory
 */

void *malloc_checked(unsigned int b)
{
	char *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (pntr);

}
