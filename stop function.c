// print a sequence of numbers in a function 
#include <stdio.h>
int Stop(int, int, int);
int start, stop, step_by;
int main()
{
	printf("enter start:\n");
	scanf("%d", &start);
	printf("enter step by:\n");
	scanf("%d", &step_by);
	printf("enter stop:\n");
	scanf("%d", &stop);
	printf("the sequence is\n");
	Stop(start, step_by, stop);
	return 0;
}
int Stop(int a, int b, int c)
{
	for ( start ; start < stop || start == stop ; start = start + step_by )
	{
		printf("%d ", start);
	}
}
