#include "main.h"

/**
 * swap_int - swap the passed in value of 2 int
 * @a: first int value
 * @b: second int value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
