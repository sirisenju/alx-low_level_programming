#include "main.h"
/**
 * print_alphabet - executes the code
 *
 * Description - prints a to z using while loop
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);

		alpha++;
	}

	_putchar('\n');
}
