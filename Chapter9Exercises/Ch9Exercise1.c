/* Chapter-9 Exercise-1 Financial- Program to calculate the number of elapsed days between two dates
*Vasanth [20 september 2014] */

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main(void)
{
	int Adays(struct date d1, struct date d2);
	struct date firstdate;
	struct date seconddate;
	int Bdays;
	
	printf("Enter First date:\n");
	scanf("%i/%i/%i", &firstdate.day, &firstdate.month, &firstdate.year);
	
	printf("Enter Second date\n");
	scanf("%i/%i/%i", &seconddate.day, &seconddate.month, &seconddate.year);
	
	Bdays = Adays(firstdate, seconddate);

	printf("Elapsed days between two dates: %i\n", Bdays);
	
	return 0;
}

int Adays(struct date d1, struct date d2)
{
	int N1;
	int N2;
	int Bdays;
		
	if( d1.month <= 2)
	{
		N1 = (1461 * (d1.year - 1)) / 4 + (153 * (d1.month + 13) )/ 5 + (d1.day - 1);
	}
	else
	{
		N1 = (1461 * (d1.year)) / 4 + (153 * (d1.month + 1) )/ 5 + (d1.day - 1);
	}
	
	if( d2.month <= 2)
	{
		N2 = (1461 * (d2.year - 1)) / 4 + (153 * (d2.month + 13) )/ 5 + (d2.day - 1);
	}
	else
	{
		N2 = (1461 * (d2.year)) / 4 + (153 * (d2.month + 1) )/ 5 + (d2.day - 1);
	}

	Bdays = N2 - N1;

	return Bdays;
}

/*
Output:
	Enter First date:
	24/3/1991
	Enter Second date:
	20/9/2014
	Elapsed days between two dates: 8581
*/	
