#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: string to be searched
 * @accept: string to search occurence of s
 *  Return: pointer to s or NULL with no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int num1, num2;

	for (num1 = 0; *(s + num1) != '\0'; num1++)
	{
		for (num2 = 0; *(accept + num2) != '\0'; num2++)
		{
			if (*(s + num1) == *(accept + num2))
			{
				return (s + num1);
			}
		}
	}
	return ('\0');/* 0 == NULL == '\0'*/
}
