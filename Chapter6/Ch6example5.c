/* Chapter-6 Program to determines if a year is a leap year
* Vasanth [02 September 2014] */

#include<stdio.h>

int main(void)
{
	int year;
	int rem_4;
	int rem_100;
	int rem_400;
	
	printf("Enter the year to be tested: ");
	scanf("%i", &year);

	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;
	
	if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
		printf("It's a leap year.\n");

	else
		printf("Nope, it's not a leap year.\n");
	
	return 0;
}

Output:
	Enter the year to be tested: 1945
	Nope, it's not a leap year.
	
	Enter the year to be tested: 2000
	It's a leap year.
	
