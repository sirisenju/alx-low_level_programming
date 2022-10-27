#include "main.h"

/**
 * string_toupper - returns the uppercase of input string
 * @string: the input string
 * Return: void
 */

char *string_toupper(char *string)
{
	int num = 0;

	while (*(string + num) != '\0')
	{
		if ((*(string + num) >= 97) && (*(string + num) <= 122))
		{
			*(string + num) = *(string + num) - 32;
		}

		num++;
	}

	return (string);
}
