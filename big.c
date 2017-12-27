// determine the largest value from 3 values enterd by user
#include <stdio.h>
int Max();
int Min();
int num, num1, num2, large, small;
int main()
{
	printf("Enter 3 numbers:\n");
	scanf("%d", &num);
	scanf("%d", &num1);
	scanf("%d", &num2);
	Max();
	printf("the largest value is: %d\n", large);
	Min();
	printf("the smallest value is: %d\n", small);
	return 0;
}
int Max()
{
	if (num > num1 && num > num2)
	{
		large = num;
	}
	else if (num1 > num && num1 > num2)
	{
		large = num1;
	}
	else if (num2 > num1 && num2 > num)
	{
		large = num2;
	}
	return large;
}
int Min()
{
	if (num < num1 && num < num2)
	{
		small = num;
	}
	else if (num1 < num && num1 < num2)
	{
		small = num1;
	}
	else if (num2 < num1 && num2 < num)
	{
		small = num2;
	}
	return small;
}