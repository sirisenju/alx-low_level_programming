#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL or pointer to array
 */
int **alloc_grid(int width, int height)
{
	int num1, num2;
	int **gridout;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(sizeof(int *) * height);
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (num1 = 0; num1 < height; num1++)
	{
		gridout[num1] = malloc(sizeof(int) * width);
		if (gridout[num1] == NULL)
		{
			for (num1--; num1 >= 0; num1--)
				free(gridout[num1]);
			free(gridout);
			return (NULL);
		}
	}
	for (num1 = 0; num1 < height; num1++)
		for (num2 = 0; num2 < width; num2++)
			gridout[num1][num2] = 0;
	return (gridout);
}
