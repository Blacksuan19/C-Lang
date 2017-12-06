#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char passwd[5];
int s;
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

	for (s = 0; s < 5; s++)
	{
		passwd[s] = (rand() % 26) + 'A';
	}

}