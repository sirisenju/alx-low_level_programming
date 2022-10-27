#include "main.h"

/**
 * string_toupper - returns the uppercase of input string
 * @str: the input string
 * Return: void
 */

char *string_toupper(char *str)
{
	while (*(str + num) != '\0')
	{
		if ((*(str + num) >= 97) && (*(str + num) <= 122))
		{
			*(str + num) = *(str + num) - 32;
		}
		num++;
	}
	return (str);
}
