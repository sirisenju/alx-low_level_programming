#include "main.h"

/**
 * _strncpy - returns the copy of a string
 * @dest: destination string
 * @src: source string
 * @n: int variable
 * Return: returns the copy of a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}

	for ( ; num < n; num++)
	{
		dest[num] = '\0';
	}

	return (dest);
}
