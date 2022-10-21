#include <stdio.h>

/**
 * main - executes the body of the code
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", num);
		}
	}
	printf("Buzz\n");
	return (0);
}
