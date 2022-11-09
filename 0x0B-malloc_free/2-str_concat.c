#include <stdlib.h>
#include "main.h"
/**
 * str_concat - adds 2 string
 * @s1: string 1
 * @s2: second string
 * Return: NULL or concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *word;
	unsigned int  num1, num2, num3, max;
i
	if (s1 == NULL)
		s1 = ""; /* null string*/
	if (s2 == NULL)
		s2 = "";

	for (num1 = 0; s1[num1] != '\0'; num1++)
	;
	for (num2 = 0; s2[num2] != '\0'; num2++)
	;

	word = malloc(sizeof(char) * (num1 + num2 + 1));

	if (word == NULL)
	{
		free(word);
		return (NULL);
	}

	for (num3 = 0; num3 < num1; num3++)
		word[num3] = s1[num3];
	max = num2;

	for (num2 = 0; num2 <= max; num3++, num2++)
		word[num3] = s2[num2];

	return (word);
}
