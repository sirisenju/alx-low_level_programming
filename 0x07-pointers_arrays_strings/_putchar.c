#include <unistd.h>

/**
 * _putchar - write the character to standard output
 * @c: the character to print out
 *
 * Return: 1 0n success
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
