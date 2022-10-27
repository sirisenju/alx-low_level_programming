#include "main.h"

/**
 * reverse_array - returns the reverse of an array
 * @a: an array of int
 * @n: number of element to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int num1, num2;

	num1 = 0;

	while (num1 < n)
	{
		n--;
		num2 = a[num1];
		a[num1] = a[n];
		a[n] = num2;
		num1++;
	}
}
