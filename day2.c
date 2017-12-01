#include <stdio.h>
#include <curses.h>
 #include <time.h>
int main()
{
   struct date;
   struct d;
 
   getdate(&d);
 
   printf("Current system date is %d/%d/%d",d.da_day,d.da_mon,d.da_year);
   getch();
   return 0;
}