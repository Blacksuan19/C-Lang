#include <stdio.h>
int main()
{
	float scale;
	printf("enter a Richter scale: ");
	scanf("%f", &scale);
	if (scale < 5.0)
	{
		printf("Little damage\n");
	}
	else if (scale > 5.0 && scale < 5.4)
	{
		printf("Some damage\n");
	} 
	else if (scale > 5.5 && scale < 6.4)
	{
		printf("Serious damage\n");
	} 
	else if (scale > 6.5 && scale < 7.4)
	{
		printf("Disaster\n");
	} 
	else if (scale > 7.4)
	{
		printf("Catastrophe\n");
	}
	return 0;
}