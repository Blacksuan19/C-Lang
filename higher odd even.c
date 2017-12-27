// determine the largest number from enterd numbers and also if its even or odd (by sy savane).
#include<stdio.h>
#define SIZE 5
int main()
{
	int i, even, odd, num[SIZE];
	printf("enter numbers: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &num[i]);

	}
	for (i = 0; i < SIZE; i++)
	{
		if (num[i] % 2 == 0)
		{
			even = num[i];
		}

	}
	for (i = 0; i < SIZE; i++)
	{
		if (num[i] % 2 == 1)
		{
			odd = num[i];
		}

	}

	printf("biggest odd is %d\n", odd);
	printf("biggest even is %d\n", even);
	if (odd > even)
	{
		printf("the higher is the odd one %d\n", odd);
	}
	else
	{
		printf("the higher is the even one %d\n", even);
	}
}
