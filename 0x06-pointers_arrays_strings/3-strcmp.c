#include "main.h"

/**
 * _strcmp - returns the comperison of two strings
 * @s1: first string
 * @s2: second string
 * Return: returns the compersion of two strings
 *
 */

int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		num = *s1 - *s2;
	}

	return (num)
}
