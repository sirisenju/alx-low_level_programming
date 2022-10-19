#include "main.h"
/**
 * main - executes the code
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		print_alphabet(alpha);

		alpha++;
	}

	_putchar('\n');
}
