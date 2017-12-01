#include <stdio.h>
int Age();
void Fuck();
int main(int argc, char const *argv[])
{
	int age, diff, donate;
	printf("enter your aage:\n");
	scanf("%d", &age);
	diff = Age(age);
	donate = 4 * 12 * diff;
	printf("your total donatition is: RM%d\n", donate);
	Fuck();
	return 0;
}
int Age(int no)
{
	int x;
	x = no - 15;
	return x;
}
void Fuck()
{
	printf("fuck you in a function !!\n");
}
