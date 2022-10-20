#include "main.h"

/**
 * print_last_digit - prints main body of code
 *
 * Description: prints the last digit of a number
 * @num: case to compare
 * Return: Always 0(success)
 */

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (num < 0)
	{
		lastDigit *= -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
