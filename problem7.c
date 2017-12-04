#include <stdio.h>
int Patient();
int GetBP();
int patient_num, i;
float blood_BP1, blood_BP2, average;
int main()
{
	printf("How Many Patients? ");
	Patient();
	return 0;
}
int Patient()
{
	scanf("%d", &patient_num);
	GetBP();
}
int GetBP()
{
	for (i = 1; i <= patient_num; ++i)
	{
		printf("Patient %d\n", i);
		printf("Blood pressure 1: ");
		scanf("%f", &blood_BP1);
		printf("Blood pressure 2: ");
		scanf("%f", &blood_BP2);
		average = (blood_BP1 + blood_BP2) / 2;
		printf("average: %.2f\n", average);
	}

}