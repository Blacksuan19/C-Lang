// teach multiplication 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int num1, num2, total, multi;
void MA_FUNCTION();
int main()
{
	int i = 2;
	MA_FUNCTION();
	while (i > 0)
	{
		while (total != num1 * num2 )
		{
			printf("No, please try again: ");
			scanf("%d", &total);
		}
		while (total = multi)
		{	printf("Very Good!\n");
			break;
		}
		MA_FUNCTION();
	}
	return 0;
}
void MA_FUNCTION()
{
	srand(time(NULL));
	num1 = 1 + rand() % (1 - 10 + 1);
	num2 = 1 + rand() % (1 - 10 + 1);
	multi = num1 * num2;
	printf("%d times %d is equal to?\n", num1, num2);
	printf("answer: ");
	scanf("%d", &total);
}