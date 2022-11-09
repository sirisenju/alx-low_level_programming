#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *word;

	if (size == 0)
	{
		return (NULL);
	}
	word = malloc(sizeof(c) * size);

	if (word == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		word[num] = c;
	return (word);
}
