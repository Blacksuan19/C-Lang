#include <stdio.h>
int main(int argc, char const *argv[])
{
	int quantity;
	float price_unit, price_sell, profit;
	printf("enter item quantity: ");
	scanf("%d", &quantity);
	printf("eneter unit price (RM): ");
	scanf("%f", &price_unit);
	printf("enter selling price (RM): ");
	scanf("%f", &price_sell);
	profit = (price_sell - price_unit) * quantity;
	printf("The profit is %.2f\n", profit);
	return 0;
}