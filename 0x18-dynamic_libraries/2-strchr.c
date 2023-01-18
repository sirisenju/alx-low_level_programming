#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurance
 */

char *_strchr(char *s, char c)
{
	unsigned int num;

	for (num = 0; *(s + num) != '\0'; num++)
	{
		if (*(s + num) == c)
		{
			return (s + num);
		}
	}

	if (*(s + num) == c)
	{
		return (s + num);
	}

	return ('\0');
}
