// calculate you donations 
#include <stdio.h>
int Age();
int main(int argc, char const *argv[])
{
	int age, diff, donate;
	printf("enter your aage:\n");
	scanf("%d", &age);
	diff = Age(age);
	donate = 4 * 12 * diff;
	printf("your total donatition is: RM%d\n", donate);
	return 0;
}
int Age(int no)
{
	int x;
	x = no - 15;
	return x;
}
