#include "main.h"

/**
 * leet - encodes a string
 * @string: the input string
 * Return: encoded string
 */
char *leet(char *string)
{
	int count = 0, num;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(string + count) != '\0')
	{
		for (num = 0; num < 5; num++)
		{
			if (*(string + count) == lower_case[num] ||
					*(string + count) == upper_case[num])
			{
				*(string + count) = numbers[num];
				break;
			}
		}
		count++;
	}
	return (string);
}
