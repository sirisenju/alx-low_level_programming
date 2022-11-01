#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int num, sum1 = 0, sum2 = 0;

	for (num = 0; num < (size * size); num++)
	{
		if (num % (size + 1) == 0)
		{
			sum1 = sum1 + *(a + num);
		}
		if (num % (size - 1) == 0 && num != 0
			&& num < (size * size - 1))
			sum2 = sum2 + *(a + num);
	}
	printf("%d, %d\n", sum1, sum2);
}
