#include <stdio.h>
#define WEIGHT 10
int student, farmer, total_student, count, weight;
int GetStrawberry();
int GetStudent();
int Calculate();
int Display();
int main()
{
	GetStrawberry();
	GetStudent();
	Calculate();
	Display();
	return 0;
}
int GetStrawberry()
{
	printf("enter weight of Strawberries in kg: ");
	scanf("%d", &weight);
}
int GetStudent()
{
	printf("enter number of students: ");
	scanf("%d", &student);
}
int Calculate()
{
	count = WEIGHT * 1000 / weight;
	farmer = count / 2;
	total_student = (count - farmer) / student;
}
int Display()
{
	printf("the farmer will retain %d Strawberries\n", farmer);
	printf("the students will get %d Strawberries \n", total_student);

}