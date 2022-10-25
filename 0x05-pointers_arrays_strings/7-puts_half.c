#include "main.h"

/**
 * puts_half - function prints half a string
 * @str: input
 * Return: void
 *
 */

void puts_half(char *str)
{
	int num = 0, i;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			break;
		}
		num++;
	}

	if (num % 2 == 1)
	{
		i = num / 2;
	}
	else
	{
		i = (num - 1) / 2;
	}

	for (i++; i < num; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
