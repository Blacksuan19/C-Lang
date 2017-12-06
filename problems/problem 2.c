#include <stdio.h>
float depth, celsius, fahrenheit;
float Celsius_at_Depth();
float Fahrenheit_function();
int main()
{
	printf("Enter depth:");
	scanf("%f", &depth);
	Celsius_at_Depth();
	Fahrenheit_function();
	printf("Celsius is %.2f\n", celsius);
	printf("Fahrenheit is %.2f\n", fahrenheit);
	return 0;
}
float Celsius_at_Depth()
{
	celsius = 10 * depth + 20;
}
float Fahrenheit_function()
{
	fahrenheit = 1.8 * celsius + 32;
}
