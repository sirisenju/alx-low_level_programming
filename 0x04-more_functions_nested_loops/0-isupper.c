#include "main.h"

/**
 * _isupper - checks if the case is upper or not
 * @c: the case study
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
