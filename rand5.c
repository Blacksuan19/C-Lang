#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char passwd[5];
int i;
char string();
int main()
{
	srand(time(NULL));
	string();
	printf("Your Password Is :%s\n", passwd);
	return 0;
}
char string()
{

	for (i = 0; i < 5; i++)
	{
		passwd[i] = (rand() % 26) + 'A';
	}
}