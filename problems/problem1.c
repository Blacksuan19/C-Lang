#include <stdio.h>
int main(int argc, char const *argv[])
{
	char shit[100];
	int num;
	float num_f;
	printf("input characters(without spaces):\n");
	scanf("%s", &shit);
	printf("input integers:\n");
	scanf("%d", &num);
	printf("input floating point integers:\n");
	scanf("%f", &num_f);
	printf("you hve input:\n%s %d %.2f\n", shit, num, num_f);
	return 0;
}