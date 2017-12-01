#include <stdio.h>
int num1, num2, result;
char op;
char OP(int , int , char);
int main()
{
	printf("enter 2 numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("enter an operator:\n");
	scanf("%s", &op);
	OP(num1, num2, op);
	return 0;
}
char OP(int , int , char )
{
	if (op == '+')
	{
		result = num1 + num2;
		printf("%d + %d = %d", num1, num2, result);
	}
	else if (op == '-')
	{
		result = num1 - num2;
		printf("%d - %d = %d", num1, num2, result);
	}
	else if (op == '*')
	{
		result = num1 * num2;
		printf("%d * %d = %d", num1, num2, result);
	}
	else if (op == '/')
	{
		result = num1 / num2;
		printf("%d / %d = %d", num1, num2, result);

	}
}