/* chapter-6 Program to implement the sign function
* Vasanth [02 September 2014] */

#include<stdio.h>

int main(void)
{
	int number;
	int sign;

	printf("Please type in a number: ");
	scanf("%i", &number);
	
	if(number < 0)
		sign = -1;
	else if (number == 0)
		sign = 0;
	else // Must be positive
		sign = 1;

	printf("Sign = %i\n", sign);

	return 0;
}

Output:
	Please type in a number: 154
	Sign = 1
	
	Please type in a number: -369
	Sign = -1
	
	Please type in a number: 0
	Sign = 0
	
