#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: int data type
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	b = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (size > 0)
	{
		for (a = 0; a < b; a++)
		{
			_putchar((a < size - 1) ? ' ' : '#');
		}
		_putchar('\n');
		size--;
	}
}
