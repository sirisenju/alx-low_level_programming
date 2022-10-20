#include <stdio.h>
/**
 * main - prints the body of the code
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}

	}
	printf("%d\n", sum);

	return (0);
}
