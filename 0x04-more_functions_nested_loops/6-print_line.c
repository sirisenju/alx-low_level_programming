#include "main.h"

/**
 * print_line - draws a straight line
 * @n: how long the line
 * Return: void
 *
 */

void print_line(int n)
{
	char a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
