#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * comparator - compares each string
 * @s: string
 * @num1: iterator
 * @num2: inerator 2
 * Return: 0 or 1
 */
int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		else
			return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects is a string is palindrome
 * @s: the string
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (comparator(s, 0, _strlen(s) - 1));
}
