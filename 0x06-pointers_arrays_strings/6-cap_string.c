#include "main.h"

/**
 * cap_string - returns the cap of evach word
 * @string: input string
 * Return: cap of all word
 */

char *cap_string(char *string)
{
	int count = 0, num;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*(string + count) >= 97) && (*(string + count) <= 122))
	{
		*(string + count) = *(string + count) - 32;
	}

	count++;

	while (*(string + count) != '\0')
	{
		for (num = 0; num < 13; num++)
		{
			if (*(string + count) == sep_words[num])
			{
				if ((*(string + count + 1) >= 97) && (*(string + count + 1) <= 122))
				{
					*(string + (count + 1)) = *(string + (count + 1)) - 32;
				}
				break;
			}

		}

		count++;
	}
	return (string);

}
