#include <stdio.h>
#define PRICE 15;
#define DISCOUNT 5;

int tickets;
float price, total, discount, nett;
float Total();
float Dis();
float Nett();
int main(int argc, char const *argv[])
{
	printf("                                               ~~Welcome to CFS ticketing system~~\n");
	printf("Enter number of tickets: ");
	scanf("%d", &tickets);
	printf("PAYMENT INFORMATION\n");
	printf("number of tickets: %d\n", tickets);
	printf("Total price: RM%.2f\n", Total());
	printf("Discount: RM%.2f\n", Dis());
	printf("Nett pay: RM%.2f\n", Nett());

	return 0;
}
float Total()
{
	total = tickets * PRICE;
	return total;
}
float Dis()
{
	//discount 5%
	discount = (total / 100) * DISCOUNT;
	return discount;
}
float Nett()
{
	nett = total - discount;
}