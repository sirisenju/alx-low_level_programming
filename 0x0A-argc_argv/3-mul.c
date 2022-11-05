#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body of the code
 * @argc: number of arguments passed to program
 * @argv: array of strings of arguments passed
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
