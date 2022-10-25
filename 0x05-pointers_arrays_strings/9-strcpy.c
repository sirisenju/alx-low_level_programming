#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string pointed
 * @dest: destination
 * @src: source
 * Return: pointer destination
 *
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (num >= 0)
	{
		*(dest + num) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++
	}
	return (dest);
}
