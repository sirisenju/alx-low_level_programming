#include "main.h"
/**
 * factorial - returns the factorial of any input
 * @n: the int input
 * Return: the result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
