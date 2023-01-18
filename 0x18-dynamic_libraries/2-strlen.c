#include "main.h"

/**
 * _strlen - returns the length of a passed string
 * @s: the passed in string
 * Return: void
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}

	return (p);
}
