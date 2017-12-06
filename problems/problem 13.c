#include <stdio.h>
int Charges();
int Total();
int customers_num, i, hours;
float total, charge;
int main()
{
	printf("Number of customers: ");
	scanf("%d", &customers_num);
	Charges();
	return 0;
}
int Charges()
{
	for (i = 1; i <= customers_num; ++i)
	{
		printf("hours Parked Customer: ");
		scanf("%d", &hours);
		if (hours > 1)
		{
			charge = (hours * .5) - .5 + 1;
		}
		else if (hours = 1)
		{
			charge = hours;
		}
		printf("Charges %.2f\n", charge);
	}
	Total();
}
int Total()
{
	printf("to be continued\n");
	printf("Thank you for using this system\n");
}