#include <stdio.h>
#define SIZE 5
int main()
{
	float Price[SIZE];
	Price[1] = 32.5;
	Price[2] = 50.0;
	Price[3] = 65.7;
	Price[4] = 33.5;
	Price[5] = 5.5;
	for (int i = 1; i <= SIZE; ++i)
	{
		printf("[%d] is %.2f \n", i, Price[i] );
	}
	return 0;
}