// print the square of a number.
#include<stdio.h>
int main(int argc, char const *argv[])
{

	float square(float b);  //  Make sure this matches the definition.

	int main()
	{
		float a, y;
		printf("enter a number?\n");
		scanf("%f", &a);
		y = square( a );
		printf("%f", y);
	}
}