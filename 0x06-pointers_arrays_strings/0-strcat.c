#include "main.h"

/**
 * _strcat - returns the concattination of 2 strings
 * @dest: the second string
 * @src: the input string
 * Return: returns the result
 */

char *_strcat(char *dest, char *src)
{
	int num1, num2;

	num1 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}

	num2 = 0;
	while (src[num2] != '\0')
	{
		dest[num1] = src[num2];
		num1++;
		num2++;
	}
	dest[num1] = '\0';

	return (dest);
}
