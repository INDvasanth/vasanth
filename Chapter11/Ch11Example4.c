/* Chapter-11 Example-11.4 Program to illustrate structure pointers 
* Vasanth [28 september 2014] */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	
	struct date today;
	struct date *datePtr;
	
	datePtr = &today;
	
	datePtr->month = 9;
	datePtr->day = 28;
	datePtr->year =  2014;
	
	printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);
	
	return 0;
}
