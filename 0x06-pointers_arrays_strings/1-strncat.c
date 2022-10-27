#include "main.h"

/**
 * _strncat - concats 2 string
 * @dest: the second string
 * @src: the input string
 * @n: n ammount
 * Return: concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int num1, num2;

	num1 = 0;
	while (*(dest + num1) != '\0')
	{
		num1++;
	}
	num2 = 0;
	while (num2 < n)
	{
		*(dest + num1) = *(src + num2);
		if (*(src + num2) == '\0')
		{
			break;
		}
		num1++;
		num2++;
	}
	return (dest);
}
