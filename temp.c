#include <stdio.h>
int main(int argc, char const *argv[])
{
	float f, c;
	printf("input temperature in Fahrenheit:\n");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("temperature in  Celsius is: %.2f\n", c);
	return 0;
}