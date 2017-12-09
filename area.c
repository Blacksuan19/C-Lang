// calculate area according to radius
#include <stdio.h>
#define PI 3.142
int main()
{
	float radius, r, area;
	int volume;
	printf("input radius:\n");
	scanf("%f", & radius);
	r = (radius * radius);
	volume = 3 / 4 * PI * (r * radius);
	area = 4 * PI * r;
	printf("area is %.2f \nvolume is %.2f\n", area, volume);
	return 0;
}