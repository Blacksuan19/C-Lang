#include <stdio.h>
#define PI 3.142 // pi value 
//global variable definition so they can be used across all the functions.
int dia_big, dia_small, a;
float price_s, price_b, area, unit_price_b, unit_price_s;
//functions and their jobs!.
int GetDiameter(); 	//get the pizza diameter.
float Compare(float, float); // compare the two price units.
float GetPrice(); // get the pizza price.
float CalclulateUnitPrice(int, float);  //calculate the unit price using diameter and price.
int main()
{
	printf("Welcome To IIUM Pizza\n\n");
	printf("Enter diameter of small pizza <in inches>: ");
	dia_small = GetDiameter(); //function call.
	printf("Enter diameter of big pizza <in inches>: ");
	dia_big = GetDiameter();
	//now we get the price
	GetPrice();
	//now will calculate the unit price.
	unit_price_s = CalclulateUnitPrice(dia_small, price_s); //function call.
	unit_price_b = CalclulateUnitPrice(dia_big, price_b); //function call.
	Compare(unit_price_b, unit_price_s);
	return 0;
}
int GetDiameter()
{
	int a;
	//get the pizza diameter
	scanf("%d", &a);
	return a; // return the user inputed value
}
float GetPrice()
{
	//get the pizza price.
	printf("Enter price of big pizza <RM>: ");
	scanf("%f", &price_s);
	printf("Enter the Price of small pizza <RM>: ");
	scanf("%f", &price_b);
}
float CalclulateUnitPrice(int x, float y)
{
	//calculate unit price.
	float c;
	area = PI * (x / 2) * (x / 2); //first calculate the area (since its a circle)
	c = y / area; // calculating the unit price
	return c; // return calculated value
}
float Compare(float x, float z)
{
	//compare the two unit prices.
	if (x < z)
	{
		printf("The large one is the better buy.\n");
	}
	else if (z < x)
	{
		printf("The small one is the better buy.\n");
	}
}
