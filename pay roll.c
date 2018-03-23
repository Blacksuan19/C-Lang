#include <stdio.h>
// defining pay rate and pay roll
#define PAY_RATE 100.00
#define PAY_ROLL 7.2
int main()
{
	int staff_num, hours;
	float taxes, gross_sal, deduction, net_sal;
	printf("                                               *****************************************************\n");
	printf("								WELCOME TO PAYROLL SYSTEM\n");
	printf("                                               *****************************************************\n\n\n");
	printf("Staff number 		      : ");
	scanf("%d", &staff_num); // get staff number.
	printf("\nHours worked per week         : ");
	scanf("%d", &hours); // get worked hours per week.
	printf("\nPay rate (RM)		      : %.2f\n\n\n", PAY_RATE); // pay rate is fixed so will just output it.
	printf("                                               *************** SALARY REPORT FOR %d ***************\n", staff_num );
	taxes = PAY_ROLL / PAY_RATE; // calculate taxes.
	gross_sal = hours * PAY_RATE; // calculate gross salary
	deduction = gross_sal * taxes; // calculate deduction.
	net_sal = gross_sal - deduction; // calculate net salary
	printf("Hours worked   : %d\n", hours);
	printf("Taxes          : %.3f\n\n", taxes);
	printf("Gross Salary   : %.2f\n", gross_sal);
	printf("Deduction      : %.2f\n", deduction);
	printf("Net Salary     : %.2f\n", net_sal);
	return 0;
}