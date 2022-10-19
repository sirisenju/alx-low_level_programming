#include "main.h"
/**
 * print_alphabet_x10 - executes the body of the code
 *
 * Descriptions: prints alpha 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int num;

	for (num = 0; num <= 9; num++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);

			alpha++;
		}
	}
	_putchar('\n');
}
