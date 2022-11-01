#include "main.h"

/**
 * _memset - a function that fills a memory with constant byte
 * @s: the character memory area
 * @b: constant byte
 * @n: bytes of memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		*(s + num) = b;
	}
	return (s);
}
