#include <stdio.h>
/**
 * main - prints the body of the code
 *
 * Return: Always 0(success)
 *
 */

int main(void)
{
	int count = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);


		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
