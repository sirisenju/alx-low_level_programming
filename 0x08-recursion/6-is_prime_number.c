#include "main.h"
/**
 * prime - makes possible to evaluate values
 * @num1: same as n
 * @num2: num that iterates from 1 to n
 * Return: returns 1 if the input int is a prime, else 0
 */
int prime(int num1, int num2)
{
	if (num1 == num2)
		return (1);
	else if (num1 % num2 == 0)
		return (0);
	else
		return (prime(num1, num2 + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: num int
 * Return: On success 1
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	else
		return (prime(n, 2));
}
