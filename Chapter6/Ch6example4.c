/* Chapter-6 Program to determine if a number is even or odd
* Vasanth [01 September 2014] */

#include<stdio.h>

int main()
{
	int number_to_test;
	int remainder;
	
	printf("Enter your number to be tested: ");
	scanf("%i", &number_to_test);

	remainder = number_to_test % 2;
	
	if(remainder == 0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return 0;
}

Output:
	Enter your number to be tested: 15
	The number is odd.
	
	Enter your number to be tested: 912
	The number is even.

