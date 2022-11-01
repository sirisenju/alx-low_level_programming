#include "main.c"

/**
 * _strspn - gets the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: characters that prefix substring must include
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num1, num2, a_len = 0, length = 0;

	while (*(accept + a_len) != '\0')
	{
		a_len++;
	}

	for (num1 = 0; *(s + num1) != '\0'; num1++)
	{
		for (num2 = 0; num2 < a_len; num2++)
			if (*(s + num1) == *(accept + num2))
				length++, num2 = a_len;
			else
				if (num2 == a_len - 1)
					goto exit;
	}
exit: return (length);
}
