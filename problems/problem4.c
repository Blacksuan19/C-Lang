#include <stdio.h>
int main(int argc, char const *argv[])
{
	float length, widgth, area, perimeter;
	printf("please enter length in meters:\n");
	scanf("%f", &length);
	printf("please enter widgth in meters:\n");
	scanf("%f", &widgth);
	area = length * widgth;
	perimeter = length + length + widgth + widgth;
	printf("the area is %.2f square meters\n", area);
	printf("the perimeter is %.2f in meters\n", perimeter);

	return 0;
}