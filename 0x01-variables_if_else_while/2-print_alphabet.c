#include <stdio.h>
/**
 * main - prints body of code
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < alpha; i++)
	{
		putchar(alpha[i]);

	}

	putchar("\n");

	return (0);
}
