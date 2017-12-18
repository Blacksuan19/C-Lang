/*matrix operations with functions arrays and arrays passing and things just are too old i guess!?*/
#include <stdio.h>
#define rows 3
#define cols 4
char op;
int matrix_1[rows][cols], matrix_2[rows][cols], matrix_3[rows][cols];
int Operations() ;
int main()
{
	printf("                                                    this program will do a user specified operation on two [%d by %d] user inputed matrixes\n", rows, cols);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("enter the first matrix values:  ");
			scanf("%d", &matrix_1[i][j]);
		}
	}
	printf("\n\n");
	for (int x = 0; x < rows; ++x)
	{
		for (int y = 0; y < cols; ++y)
		{
			printf("enter the second matrix values values:  ");
			scanf("%d", &matrix_2[x][y]);
		}
	}
	printf("Enter operator: ");
	scanf("%s", &op);
	Operations();
	printf("the result is:\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("%d  ", matrix_3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
int Operations()
{
	if (op == '+')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
			}
		}
	}
	else if (op == '-')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				matrix_3[i][j] = matrix_1[i][j] - matrix_2[i][j];
			}
		}
	}
	else if (op == '*')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				matrix_3[i][j] = matrix_1[i][j] * matrix_2[i][j];
			}
		}
	}
	if (op == '/')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				matrix_3[i][j] = matrix_1[i][j] / matrix_2[i][j];
			}
		}
	}
}
// this shit is not finished finish it if you can