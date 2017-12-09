// read and print 5 names stored in an array
#include<stdio.h>
char a[5],i;
void display()
{
    printf("Enter The 5 names:\n");
    for(i=1;i<=5;i++)
    {
      scanf("%s",&a[i]);  
    }
}
void show()
{
    printf("The Names Are\n");
    for(i=1;i<=5;i++)
    {
    printf("%s",a[i]);
    }
}
int main()
{
    display();
    show();
}