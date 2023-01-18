#include "main.h"

/**
 * _atoi - converts a string to int
 * @s: input string
 * Return: void
 *
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, x = 0, y = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}
		if (*(s + count) == '-')
		{
			y *= -1;
		}

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
			{
				m *= 10;
			}
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		x = x + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (x * y);
}
