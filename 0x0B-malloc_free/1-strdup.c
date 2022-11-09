#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a memory space
 * @str: string given as a parameter
 * Return: NULL or pointer to string
 */
char *_strdup(char *str)
{
	unsigned int num1, num2;
	char *word;

	if (str == NULL)
		return (NULL);

	for (num1 = 0; str[num1] != '\0'; num1++)
	;
	word = (char *)malloc(sizeof(char) * (num1 + 1));

	if (word == NULL)
		return (NULL);

	for (num2 = 0; num2 <= num1; num2++)
		word[num2] = str[num2];

	return (word);
}
