#include <stdio.h>
int main()
{
	int degree;

	do
	{
		printf("Compass Reading: ");
		scanf("%d", &degree);
		if (degree > 0 && degree < 44)
		{
			printf("North\n");
		}
		else if (degree > 44 && degree < 134)
		{
			printf("East\n");
		}
		else if (degree > 135 && degree < 224)
		{
			printf("South\n");
		}
		else if (degree > 225 && degree < 315)
		{
			printf("West\n");
		}
		else if (degree > 316)
		{
			printf("Invalid!!\n");
		}
		
	} while (degree > 0);
	return 0;
}