/*Chapter-9 Exercise-3 program to calculate elapsed days between two dates displaying day of the week
* Vasanth [20 september 2014] */

#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main(void)
{
	int elapseddays(struct date d1, struct date d2);
	struct date startingdate;
	struct date endingdate;
	int elapseddays1;
	
	printf("Enter the Starting date [D:M:YYYY]:\n");
	scanf("%i/%i/%i", &startingdate.day, &startingdate.month, &startingdate.year);
	
	printf("Enter the ending date [D:M:YYYY]:\n");
	scanf("%i/%i/%i", &endingdate.day, &endingdate.month, &endingdate.year);
	
	elapseddays1 = elapseddays(startingdate, endingdate);
	
	printf("\nDays of the Week: %i\n", elapseddays1);
	
	return 0;
}

int elapseddays(struct date d1, struct date d2)
{
	int n1;
	int n2;
	int elapseddays1;
	int day;
	char days[7] = {'S', 'M', 'T', 'W', 't', 'F', 's'};
	
	printf("\nS-sunday M-monday T-tuesday W-wednesday t-thursday F-friday s-saturday\n\n");
	
	if( d1.month <= 2)
	{
		n1 = (1461 * (d1.year - 1)) / 4 + (153 * (d1.month + 13) )/ 5 + (d1.day - 1);
	}
	else
	{
		n1 = (1461 * (d1.year)) / 4 + (153 * (d1.month + 1) )/ 5 + (d1.day - 1);
	}
	
	day = n1 % 7;
	
	printf("Day:%c\n", days[day]);
	
	if( d2.month <= 2)
	{
		n2 = (1461 * (d2.year - 1)) / 4 + (153 * (d2.month + 13) )/ 5 + (d2.day - 1);
	}
	else
	{
		n2 = (1461 * (d2.year)) / 4 + (153 * (d2.month + 1) )/ 5 + (d2.day - 1);
	}

	day = n2 % 7;

	printf("Day:%c\n", days[day]);

	elapseddays1 = n2 - n1;

	return elapseddays1;
}

/*
Output:
	Enter the Starting date [D:M:YYYY]:
	23/3/1991
	Enter the ending date [D:M:YYYY]:
	10/9/2014
	
	S-sunday M-monday T-tuesday W-wednesday t-thursday F-friday s-saturday
	
	Day:s
	Day:t
	
	Days of the Week: 8572
*/
