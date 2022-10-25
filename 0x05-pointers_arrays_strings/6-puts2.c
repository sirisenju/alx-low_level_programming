#include "main.h"

/**
 * puts2 - prints all characters passed with a new line
 * @str: the string passed
 * Return: void
 *
 */

void puts2(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}

		num++;
	}
}
