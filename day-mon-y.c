// covert days to years and months.
#include <stdio.h>
int main()
{
	int x , years , months, days, remain ;
	printf("please enter the days number : ");
	scanf("%d", &x);

	years = x / 360 ;
	remain = x % 360 ;
	months = remain / 30 ;
	remain = remain % 30;
	days = remain ;

	printf("the number of whole days is : %d\nthe number of years is : %d\nthe number of months is : %d\nthe number of days is : %d\n", x, years , months , days );

}