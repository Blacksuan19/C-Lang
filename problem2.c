#include <stdio.h>
int candy_bags, candy_each, chil_num;
int Capture();
void Count();
int Display_Output();
int main()
{
	printf("Enter the number of candy bags available: ");
	candy_bags = Capture();
	printf("Enter the number of children: ");
	chil_num = Capture();
	Count();
	return 0;
}
int Capture()
{
	int a;
	scanf("%d", &a);
	return a;
}
void Count()
{
	candy_each = candy_bags / chil_num;
	Display_Output();
}
int Display_Output()
{
	printf("total candy bags is %d and each child will get %d\n", candy_bags, candy_each);
}