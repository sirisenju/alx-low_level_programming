#include "main.h"

/**
 * _isalpha - exectues the body fo the code
 * @c: the case to be checked
 * Description: checks if a variable is alpha
 * Return: Return 1 if c is a letter else 0
 *
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
