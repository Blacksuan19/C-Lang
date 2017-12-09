// do something to two numbers according to the operator enterd by user
#include <stdio.h>
int main()
{
	int num1, num2, result;
	char op;
	printf("enter 2 numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("enter an operator:\n");
	scanf("%s", &op);
	if (op == '+')
	{
		result = num1 + num2;
	}
	else if (op == 'B')
	{
		result = num1 - num2;
		printf("shit\n");
	}
	else if (op == '*')
	{
		result = num1 * num2;
		printf("fuck\n");
	}
	else if (op == '/')
	{
		result = num1 / num2;
	}
	printf("%d ", num1);
	printf("%d ", num2);
	printf("= ");
	printf("%d ", result);

	return 0;
}