#include <stdio.h>
int main()
{
	int start, stop, step_by;
	printf("enter start:\n");
	scanf("%d", &start);
	printf("enter step by:\n");
	scanf("%d", &step_by);
	printf("enter stop:\n");
	scanf("%d", &stop);
	printf("the sequence is\n");
	for ( start ; start < stop || start == stop ; start = start + step_by )
	{
		printf("%d ", start );
	}
}