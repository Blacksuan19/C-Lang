#include <stdio.h>
int main()
{
	int quantity;
	float price, total;
	printf("enter quantity and price(seperated by spaces):\n");
	scanf("%d %f", &quantity, &price);
	total = quantity * price;
	printf("the total price is: \n%d x RM %.2f = RM %.2f", quantity, price, total);
	return 0;
}