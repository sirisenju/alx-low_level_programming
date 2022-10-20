#include "main.h"

/**
 * print_sign - prints the body of the code
 * Descriotion: a function that prints the sign of a number
 * @n: the case to check
 *
 * Return: Always 0(success)
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}

	return (num);
}
