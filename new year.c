// print a nice message when its new year
#include <stdio.h>
#include <time.h>
int year, day, month, hour, min, sec;
int Time();
int main()
{
	Time();
	printf("the time is: %d:%d:%d \n", hour, min, sec, month, day );
	if (month > 1 && month == 12)
	{
		printf("chill bruh its not the new year yet!!\n");
		printf("you still have %d days in %d \n", 31 - day, year);
	}
	else if (month == 1 && day == 0)
	{
		printf("it's a new year baby!!\n");
		printf("hope its a great year for you and everyone you love!!\n");
	}
	else if (month > 1 && month > 12)
	{
		printf("boi you still have a long way to go!! \n");
	}
	return 0;
}
int Time()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	day = tm.tm_mday - 1;
	year = tm.tm_year + 1900;
	month = tm.tm_mon + 1;
	hour = tm.tm_hour;
	min = tm.tm_min;
	sec = tm.tm_sec;
}