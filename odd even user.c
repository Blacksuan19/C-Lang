// print odd or even numbers in an arrayenterd by user 
#include <stdio.h>
#define SIZE 3
int num[SIZE], odd_num[SIZE], even_num[SIZE], numbers;
void odd_even();
int main()
{
	printf("how many numbers you want to enter: ");
	scanf("%d", &numbers);
	SIZE == numbers;
	printf("enter %d numbers to determine the odds and evens: ", numbers);
	for (int i = 1; i <= numbers; ++i)
	{
		scanf("%d", &num[i]);
	}
	odd_even();
	printf("odd numbers are: ");
	for (int i = 1; i < SIZE; ++i)
	{
		if (odd_num[i] > 0)
		{
			printf("%d ", odd_num[i]);
		}
	}
	printf("\n");
	printf("even numbers are: ");
	for (int x = 1; x < SIZE; ++x)
	{
		if (even_num[x] > 0)
		{
			printf("%d ", even_num[x]);
		}
	}
	printf("\n");
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