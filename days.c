//determine  how many months is a specific amount of days equal to 
#include <stdio.h>
int main()
{
	int days, month, left;
	printf("enter days:\n");
	scanf("%d", &days);
	month = days / 30;
	left = days % 30;
	printf("%d days = %d month(s) and %d days \n", days, month, left );
	return 0;
}