#include <stdio.h>
#define SIZE 5
int main()
{
	int i, x;
	float MaFloat[SIZE], total;
	for (i = 0; i < SIZE; ++i)
	{
		printf("enter a floating number: ");
		scanf("%f", &MaFloat[i]);
	}
	for (x = 1; x < SIZE; ++x)
	{
		total = total + MaFloat[x];
	}
	printf("total = %f, average = %f\n", total, total / SIZE);
	return 0;
}