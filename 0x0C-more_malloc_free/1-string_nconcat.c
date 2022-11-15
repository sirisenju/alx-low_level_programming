#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that adds 2 strings together
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of str 2
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, num1, num2;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num1 = 0, num2 = 0;
	while (*(s1 + num1))
		num1++;
	while (*(s2 + num2))
		num2++;
	if (n < num2)
		num2 = n;

	strng = malloc(sizeof(char) * (num1 + num2 + 1));

	if (strng == 0)
		return (0);

	for (x = 0; x < num1; x++)
		*(strng + x) = *(s1 + x);

	for (x = 0, y = num1; x < num2; x++, y++)
		*(strng + y) = *(s2 + x);

	*(strng + y) = '\0';
	return (strng);
}
