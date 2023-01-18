#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string to search needle
 * @needle: string to search
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int num1, num2;

	for (num1 = 0; *(haystack + num1) != '\0'; num1++)
	{
		for (num2 = 0; *(needle + num2) != '\0'; num2++)
		{
			if (*(haystack + num1 + num2) != *(needle + num2))
				break;
		}

		if (*(needle + num2) == '\0')
		{
			return (&haystack[num1]);
		}
	}

	return ('\0');
}
