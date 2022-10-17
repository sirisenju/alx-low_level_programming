#include <stdio.h>
/**
 * main - body of code
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 0;
	int firstDigit, secondDigit;
	int num2;
	int firstDigit1, secondDigit1;

	while (num1 <= 98)
	{
		firstDigit = (num1 / 10 + 48);
		secondDigit = (num1 % 10 + 48);
		num2 = 0;

		while (num2 <= 99)
		{
			firstDigit1 = (num2 / 10 + 48);
			secondDigit1 = (num2 % 10 + 48);
			if (num1 < num2)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(' ');
				putchar(firstDigit1);
				putchar(secondDigit1);
				if (num1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
