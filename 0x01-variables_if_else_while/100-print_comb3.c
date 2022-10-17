#include <stdio.h>
/**
 * main - body of the code
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (j < 58)
	{
		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);

				if (i == 57 && j == 56)
				{
					break;

				}

				putchar(',');
				putchar(' ');
			}

			i++;

		}

		j++;

	}
	putchar('\n');
	return (0);
}
