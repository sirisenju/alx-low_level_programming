#include "main.h"

/**
 * _isdigit - checks if c is a digit or not
 *  @c: the case study to check
 *  Return: 1 or 0
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
