/*matrix operations with functions arrays and arrays passing and things just are too old i guess!?*/
#include <stdio.h>
#define rows 3
#define cols 4
int Operations(int a[rows][cols], int b[rows][cols], char) ;
int main()
{
	char op;
	int matrix_1[rows][cols], matrix_2[rows][cols], matrix_3[rows][cols];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("enter matrix one values:  ");
			scanf("%d", &matrix_1[i][j]);
		}
	}
	for (int x = 0; x < rows; ++x)
	{
		for (int y = 0; y < cols; ++y)
		{
			printf("enter matrix two values:  ");
			scanf("%d", &matrix_2[x][y]);
		}
	}
	printf("Enter operator\n");
	scanf("%c", &op);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			matrix_3[i][j] = Operations(matrix_1[i][j], matrix_2[i][j], op)
		}
	}

	return 0;
}
int Operations(int a[rows][cols], int b[rows][cols], char c)
{
	int m[rows][cols]; //mask for matrix_3 and the value being returned.
	if (c == '+')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				m[i][j] = a[i][j] + b[i][j];
				return m[i][j];
			}
		}
	}
	else if (c == '-')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				m[i][j] = a[i][j] - b[i][j];
				return m[i][j];
			}
		}
	}
	else if (c == '*')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				m[i][j] = a[i][j] * b[i][j];
				return m[i][j];
			}
		}
	}
	if (c == '/')
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				m[i][j] = a[i][j] / b[i][j];
				return m[i][j];
			}
		}
	}
}
// this shit is not finished finish it if you can