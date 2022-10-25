#include "main.h"

/**
 * rev_string - a function that returns the reverse of a string
 * @s: passed in string
 * Return: void
 *
 */

void rev_string(char *s)
{
	int count = 0, i, j;

	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\n')
		{
			break;
		}
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
