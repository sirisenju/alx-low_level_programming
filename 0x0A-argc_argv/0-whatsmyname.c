#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body of the code
 * @argc: contains the number of arguments
 * @argv: pointer of pointers containing strings
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}
