// simple array example.
#include <stdio.h>
#include <string.h>
int main()
{
	char symptoms_array[11][100];
	strcpy(symptoms_array[0], "Hunger");
	strcpy(symptoms_array[1], "Dry mouth ");
	strcpy(symptoms_array[2], "Blurred vision");
	strcpy(symptoms_array[3], "Peeing more often");
	strcpy(symptoms_array[4], "itchy skin");
	strcpy(symptoms_array[5], "fatigue");
	strcpy(symptoms_array[6], "Slow-healing cuts");
	strcpy(symptoms_array[7], "Pain or numbness in feet or legs");
	strcpy(symptoms_array[8], "weight loss");
	strcpy(symptoms_array[9], "Nausea");
	strcpy(symptoms_array[10], "Vomiting");
	do {
		printf("[%d] %s\n", a, symptoms_array[a]);
		++a;
	} while (a <= 10);
	return 0;
}