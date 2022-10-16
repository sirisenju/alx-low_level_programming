#include <stdio.h>
/**
 * main - execute body of the code
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alpha[i] != "e" || alpha[i] != "q")
		{
			putchar(alpha[i]);
		}
		putchar('\n');
	}
}
