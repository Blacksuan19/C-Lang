//  print numbers which are even and bigger than a user enterd number also print the sum of them.
#include <stdio.h>
#define SIZE 15
int number, Max[SIZE], list[15], i, sum;;
int Search_Event();
int main()
{
	printf("enter number: ");
	scanf("%d", &number);
	printf("enter %d numbers :", SIZE);
	do
	{
		scanf("%d", &list[i]);
		++i;
	} while (i < SIZE);
	Search_Event();
	i = 0;
	printf("the numbers that are even and bigger than %d are: ", number);
	do
	{
		if (Max[i] > 0)
		{
			printf("%d ", Max[i]);
		}
		++i;
	} while (i < SIZE);
	printf("\nthe total of them is: %d\n", sum);
	return 0;
}
int Search_Event()
{
	i = 0;
	do
	{
		if (list[i] % 2 == 0)
		{
			if (list[i] > number)
			{
				Max[i] = list[i];
				sum += Max[i];
			}
		}
		++i;
	} while (i < SIZE);
}