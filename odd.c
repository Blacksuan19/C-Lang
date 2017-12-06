#include<stdio.h>

int Number(int);
int main() {
	int n;

	printf("enter an integer number: ");
	scanf("%d", &n);

	Number(n);
}

int Number(int n) {
	if (n % 2 == 0)
	{
		printf(" %d is an even number", n);
	}
	else
	{
		printf(" %d is an odd number", n);
	}
}