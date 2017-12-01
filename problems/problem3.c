#include <stdio.h>
int main()
{
	int no, no1, no2;
	printf("enter three numbers(seperated by spaces):\n");
	scanf("%d %d %d", &no, &no1, &no2);
	printf("your numbers are: \n%d %d %d \n", no, no1, no2);
	printf("your numbers reversed: \n%d %d %d \n", no2, no1, no);
	return 0;
}