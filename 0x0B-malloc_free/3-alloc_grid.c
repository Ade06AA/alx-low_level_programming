#include <stdlib.h>
#include <stddef.h>
/**
* alloc_grid - func name
* @width:
* @height:
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gp;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gp[i]=malloc(sizeof(int) * width);
		if (gp[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			gp[i][j] = 0;
		}
	}
	return (gp);
}
