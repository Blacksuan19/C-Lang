// calculate area according to radius in a diffrent function
#include <stdio.h>
#define PI 3.142
float Area();
float radius, r, area;
int volume;
int main()

{
	printf("input radius:\n");
	scanf("%f", & radius);
	Area();
	printf("area is %.2f \nvolume is %.2f\n", area, volume);
	return 0;
}
float Area()
{
	r = (radius * radius);
	volume = 3 / 4 * PI * (r * radius);
	area = 4 * PI * r;
}