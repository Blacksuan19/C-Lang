#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("enter a positive number:\n");
	scanf("%d", &n);
	switch (n > 0)
	{
	case 1 : printf("positive number\n"); break;
	case 0 : printf("non positive number terminating program\n");
	}
	return 0;
}