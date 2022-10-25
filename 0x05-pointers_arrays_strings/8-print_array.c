#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n ammount of an array
 * @a: input array
 * @n: input n element
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; num < n; num++)
	{
		printf("%d", *(a + num));

		if (num != (n - 1))
		{
			printf(", ");
		}

	}

	printf("\n");
}
