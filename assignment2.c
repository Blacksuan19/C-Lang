/*            Assalamu Alaikum
Assignment2 Semester 1  Section 1 --2016/2017-- name of members:
1-Mahmoud Maher ELkahlout "1512209"
2-MOHAMMED KHALED MOHAMMED BASHANFAR "1617899"
*/
#include<stdio.h>
int main()
{
    int quiz1, quiz2, quiz3, sum, matric; //The programe use these variables to calculate the average of quizes and the number of students in class
    int total_sum = 0;
    int student = 1;
    float average, total_average; //the programme uses these varibles to measure the average and total average
    printf("\t\t\tWelcome to IIUM Mark Entry System\n");
    printf("\t\t\t+++++++++++++++++++++++++++++++++\n");
    printf("\n");
    do
    {
        printf("Enter student %d matric no:", student);
        scanf("%d", &matric);
        if (matric != 0)
        {

            printf("enter quiz1\n");
            scanf("%d", &quiz1);
            printf("enter quiz2\n");
            scanf("%d", &quiz2);
            printf("enter quiz3\n");
            scanf("%d", &quiz3);
            sum = quiz1 + quiz2 + quiz3;
            printf("sum is %d \n", sum);
            average = sum / 3;
            printf("average of student is %.2f\n", average);
            total_sum += sum;
            ++student;
        }
        else if (student < 4 && matric == 0)
        {
            printf("Enter student %d matric no:", student);

            scanf("%d", &matric);
            printf("enter quiz1\n");
            scanf("%d", &quiz1);
            printf("enter quiz2\n");
            scanf("%d", &quiz2);
            printf("enter quiz3\n");
            scanf("%d", &quiz3);
            sum = quiz1 + quiz2 + quiz3;
            printf("sum is %d\n", sum);
            average = sum / 3;
            printf("average of student is %.2f\n", average);
            total_sum = total_sum + sum;
            ++student;
        }
        printf("\n");
    }
    while (matric != 0);
    printf("number of student in the class is %d", student - 1);
    total_average = total_sum / student;
    printf("average mark for this class is %.2f", total_average);
    system("pause");
    return 0;
}
