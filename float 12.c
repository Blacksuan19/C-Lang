#include <stdio.h>
#define SIZE 12
float Deci_num[SIZE], largest, average, total;
void OP();
int main()
{
	printf("enter 12 floating point numbers?\n");
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%f", &Deci_num[i]);
	}
	OP();
	printf("total is %.2f\n", total);
	printf("average is %.2f\n", average);
	printf("largest value is %.2f\n", largest);
	return 0;
}
void OP()
{
	for (int i = 0; i < SIZE; ++i)
	{
		total += Deci_num[i];
	}
	for (int i = 0; i < SIZE; ++i)
	{
		average = (average + Deci_num[i]) / 2;
	}
	largest = Deci_num[0];
	for (int i = 1; i < SIZE; ++i)
	{
		if (largest < Deci_num[i])
		{
			largest = Deci_num[i];
		}
	}
}
