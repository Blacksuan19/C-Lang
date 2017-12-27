// print odd or even numbers in an array.
#include <stdio.h>
#define SIZE 7
int main(int argc, char const *argv[])
{
	int num[SIZE] = {27, 3, 24, 6, 87, 5, 12}, odd_num[SIZE], even_num[SIZE];
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