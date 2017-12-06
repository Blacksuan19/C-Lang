#include <stdio.h>
#define MEAL_ALLOWANCE 30
int main()
{
	char course[30];
	int person_nm;
	float course_fee, total_allowance, overall, total_fee;
	printf("Enter the type of course :\n");
	scanf("%s", &course);
	printf("Enter the number of persons attending the course:\n");
	scanf("%d", &person_nm);
	printf("Enter course fee per perosn (RM):\n");
	scanf("%f", &course_fee);
	printf("******************************\n");
	total_fee = (float) course_fee * person_nm;
	total_allowance = (float) MEAL_ALLOWANCE * person_nm;
	overall = (float) total_fee + total_allowance;
	printf("total course fee is RM %.2f\n", total_fee);
	printf("total meal allowance is RM %.2f\n", total_allowance);
	printf("total cost to send %d person(s) to %s course is RM %.2f\n", person_nm, course, overall);
	return 0;
}