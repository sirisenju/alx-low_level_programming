#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concats all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: NULL or pointer reference
 */

char *argstostr(int ac, char **av)
{
	char *word;
	int num1, num2, num3, num4;

	if (ac == 0)
		return (NULL);

	for (num1 = num2 = 0; num2 < ac; num2++)
	{
		if (av[num2] == NULL)
			return (NULL);

		for (num3 = 0; av[num2][num3] 1 = '\0'; num3++)
			num1++;
		num1++;
	}

	word = malloc(sizeof(char) * (num1 + 1));

	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	for (num2 = num3 = num4 = 0; num4 < num1; num3++, num4++)
	{
		if (av[num2][num3] == '\0')
		{
			word[num4] = '\n';
			num2++;
			num4++;
			num3 = 0;
		}
		if (num4 < num1 - 1)
			word[num4] = av[num2][num3];
	}
	word[num4] = '\0';
	return (word);
}
