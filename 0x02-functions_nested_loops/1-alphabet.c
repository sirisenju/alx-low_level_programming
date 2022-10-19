#include "main.h"
/**
 * main - executes the code
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		print_alphabet(alpha);

		alpha++;
	}

	_putchar('\n');

	return (0);
}
