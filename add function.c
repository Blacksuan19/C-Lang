#include <stdio.h>
int Add(int, int);
int main()
{
	int result;
	result = Add(20, 30);
	printf("the result is : %d\n", result);
	return 0;
}
int Add(int num1, int num2)
{
	int result;
	result = num1 + num2;
}