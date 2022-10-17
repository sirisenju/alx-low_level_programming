#include <stdio.h>
/**
 * main - body of the code
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;
			while (k < 48)
			{
				if (j != i && j != k && i != k && j < i && i < k)
				{
					putchar(j);
					putchar(i);
					putchar(k);

					if (i == 56 && j == 55 && k == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
				}

				k++;

			}

			i++;

		}

		j++;
	}
	putchar('\n');
	return (0);

}
