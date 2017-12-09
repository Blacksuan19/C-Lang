// bmi (body mass index ) calculator
#include<stdio.h>
void main()
{
	float w, h, bmi;
	printf("Enter weight in kgs and height in meters");
	scanf("%f%f", &w, &h);
	bmi = w / (h * h);
	printf("bmi: %f", bmi);
	bmi < 18.5 ? printf("Underweight") : (bmi < 25) ? printf("Normal weight") : (bmi < 30) ? printf("Overweight") : printf("Obesity");
}
