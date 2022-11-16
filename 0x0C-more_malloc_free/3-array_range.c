#include "main.h"
#include <stdlib.h>
/**
 * array_range - faunction creates an array of int
 * @min: minimum vale of the array to be created
 * @max: maximum value of the array to be created
 * Return: pointer to the array or null
 */

int *array_range(int min, int max)
{
	int *ptr;
	int num, n;

	if (min > max)
	{
		return (NULL);
	}

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (num = 0; num < n; num++)
		ptr[num] = min + num;

	return (ptr);
}
