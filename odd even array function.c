// print odd or even numbers in an array.
#include <stdio.h>
#define SIZE 7
int num[SIZE] = {27, 3, 24, 6, 87, 5, 12}, odd_num[SIZE], even_num[SIZE];
#define SIZE 7
void odd_even();
int main()
{
	odd_even();
	printf("odd numbers are:\n");
	for (int i = 1; i < SIZE; ++i)
	{
		printf("%d\n", odd_num[i]);
	}
	printf("even numbers are:\n");
	for (int x = 1; x < SIZE; ++x)
	{
		printf("%d\n", even_num[x]);
	}
	return 0;
}
void odd_even()
{
	for (int s = 1; s < SIZE; ++s)
	{
		if (num[s] % 2 == 1)
		{
			odd_num[s] = num[s];

		}
	}
	for (int s = 1; s < SIZE; ++s)
	{
		if (num[s] % 2 == 0)
		{
			even_num[s] = num[s];

		}
	}
}