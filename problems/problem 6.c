#include <stdio.h>
#define TAX_RATE .06
int cost, discount, total_cost, total_dis,  total_due, due, item_num;
void Amount_Due();
int Get_Input();
void  Display_Output();
int main()
{
	printf("Enter item cost: ");
	cost = Get_Input();
	printf("Enter number of items: ");
	item_num = Get_Input();
	printf("Enter item discount: ");
	discount = Get_Input();
	Amount_Due();
	Display_Output();
	return 0;
}
int Get_Input()
{
	int a;
	scanf("%d", &a);
	return a;
}
void  Amount_Due()
{
	total_cost = item_num * cost;
	total_dis = total_cost - (discount * total_cost);
	total_due = total_dis * TAX_RATE;
	due = total_dis + due;
}
void Display_Output()
{
	printf("total cost is %d\n", total_cost);
	printf("total discount is %d\n", total_dis);
	printf("amount due  is %d\n", total_due);

}