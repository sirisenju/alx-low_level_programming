#include <stdio.h>

/**
 * main - executes the code
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int x = 2;

	while (x < num)
	{
		while (num % x == 0)
		{
			if (num == x)
			{
				break;
			}

			num /= x;
		}
		x++;
	}

	printf("%lu\n", num);
	return (0);
}
