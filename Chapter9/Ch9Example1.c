/* Chapter-1 Example-1 Program to illustrate a structure
* Vasanth [15 September 2014] */

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
	
	today.month = 9;
	today.day = 25;
	today.year = 2004;
	
	printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year%100);
	
	return 0;
}

/*
Output:
	Today's date is 9/25/04
*/
