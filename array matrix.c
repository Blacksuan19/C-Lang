/*a matrix array*/
#include <stdio.h>
#define rows 3
#define cols 4
int main()
{
	int i, j, x, y;
	int matrix[rows][cols];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("Enter a number: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int x = 0; x < rows; x++)
	{
		for (int y = 0; y < cols; y++)
		{
			printf("%d  ", matrix[x][y]);
		}
		printf("\n");
	}
	return 0;
}