// calorie calculator
#include "stdio.h"
#include <string.h>
int main()
{
	int age, height, total_male, total_female;
	float weight;
	char gender[100];
	printf("enter your gender:\n");
	scanf("%s", &gender);
	if (strcmp(gender, "male") == 0)
	{
		printf("enter your age:\n");
		scanf("%d", &age);
		printf("enter your height in cm:\n");
		scanf("%d", &height);
		printf("enter your weight in kg:\n");
		scanf("%f", &weight);
		total_male = (float) 10 * weight + 6.25 * height - 5 * age + 5;
		printf("the amount of needed calories per day according to (MBR) is: %d\n", total_male );
	}
	else if (strcmp(gender, "female") == 0)
	{
		printf("enter your age:\n");
		scanf("%d", &age);
		printf("enter your height in cm:\n");
		scanf("%d", &height);
		printf("enter your weight in kg:\n");
		scanf("%f", &weight);
		total_female = (float) 10 * weight + 6.25 * height - 5 * age - 161;
		printf("the amount of needed calories per day according to (MBR) is: %d\n", total_female );
	}
	else {
		printf("not recognized gender please enter your birth gender (male/female)\n");
	}
	/*many thanks to sublime text for being so helpfull and light on this A10!!*/
	return 0;

}
