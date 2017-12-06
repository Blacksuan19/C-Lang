#include <stdio.h>
#define OVERTIME_SALARY 10
// problem 6
int main()
{
	char name[20];
	int overtime_hours;
	float salary, overtime_total, total;
	printf("Enter name: ");
	scanf("%s", &name);
	printf("Enter Monthly salary (RM): ");
	scanf("%f", &salary);
	printf("Enter overtime hours: ");
	scanf("%d", &overtime_hours);
	printf("*******************************\n");
	printf("Monthly salary is RM %.2f\n", salary);
	overtime_total = overtime_hours * OVERTIME_SALARY;
	printf("Overtime claim is RM %.2f\n", overtime_total);
	total = salary + overtime_total;
	printf("%s, your total pay for this month is RM %.2f\n", name, total);
	return 0;
}